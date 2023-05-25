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
        if (memberList[i]->getType() == 1) { // �ش� ����� ȸ�� ȸ���̰�
            if (memberList[i]->getNumber() == businessNumber) { // ȸ���� ����� ��ȣ�� ��ġ�ϸ�
                target_employment = ((CorporateMember*)memberList[i])->getEmploymentList().back();
                cout << target_employment->getNumberOfApps();
                // cout << matchCorporateMember->getName(); // ������ �ڵ�
            }
        }
    }
    cout << "eeh?";

    vector<Employment*>& employmentList = matchCorporateMember->getEmploymentList(); // �ش� ȸ�� ȸ���� ä�� ���� ��� ��������
    Employment* employment = employmentList.back(); // �ֱ� ä�� ���� ��������

    employment->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline); // �ֱ� ä�� ������ Detail data ��������
    string ref_company_name = matchCorporateMember->getName(); // ȸ�� ȸ���� �̸� ��������

    Application* newApp = new Application(ref_part, ref_company_name, businessNumber, ref_number_of_people, ref_application_deadline);
    employment->addApplication(newApp); //Employment�߰�
    curMem->addApplication(newApp);     //GeneralMember�߰�

    //ȸ���̸� ��ȣ ����
    fout << "4.2. ä�� ����\n";
    fout << "> " << ref_company_name << " " << businessNumber << " " << ref_part << "\n";
    fout << "\n";
}
