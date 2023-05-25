#include <iostream>
#include <string>
#include <vector>
#include "Apply.h"
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
#include <map>
#include <fstream>

extern ofstream fout;
using namespace std;


void Apply::applyEmployment(GeneralMember* curMem, string businessNumber, MemberDB& memDB)
{
    string ref_part, ref_application_deadline;
    int ref_number_of_people;
    Employment* target_employment;

    vector<Member*>& memberList = memDB.getMemberList();
    for (int i = 0; i < memberList.size(); i++) {
        cout << memberList[i]->getName() << "\n";
        if (memberList[i]->getType() == 1) { // 해당 멤버가 회사 회원이고
            if (memberList[i]->getNumber() == businessNumber) { // 회원의 사업자 번호가 일치하면
                target_employment = ((CorporateMember*)memberList[i])->getEmploymentList().back();
                cout << target_employment->getNumberOfApps();
                // cout << matchCorporateMember->getName(); // 디버깅용 코드
            }
        }
    }
    cout << "eeh?";

    vector<Employment*>& employmentList = matchCorporateMember->getEmploymentList(); // 해당 회사 회원의 채용 공고 목록 가져오기
    Employment* employment = employmentList.back(); // 최근 채용 정보 가져오기

    employment->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline); // 최근 채용 정보의 Detail data 가져오기
    string ref_company_name = matchCorporateMember->getName(); // 회사 회원의 이름 가져오기

    Application* newApp = new Application(ref_part, ref_company_name, businessNumber, ref_number_of_people, ref_application_deadline);
    employment->addApplication(newApp); //Employment추가
    curMem->addApplication(newApp);     //GeneralMember추가

    //회사이름 번호 업무
    fout << "4.2. 채용 지원\n";
    fout << "> " << ref_company_name << " " << businessNumber << " " << ref_part << "\n";
    fout << "\n";
}
