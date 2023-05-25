#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowMyEmployments.h"

#include <fstream>
using namespace std;
extern ofstream fout;


//채용 정보 리스트 출력


void ShowMyEmployments::showEmployments(CorporateMember* curMem) {

    string part; int numPeople;  string deadLine;
    //참조용 지역변수 선언

    vector<Employment*>& list = curMem->getEmploymentList();
    //회사 회원의 EmploymentList 저장
    //1.1.1: getEmploymentList()

    fout << "3.2. 등록된 채용 정보 조회\n";

    for (const auto& employment : list) {
        employment->getDetailEmployment( part, numPeople, deadLine);
        //각 EmploymentList의 detail 반환하여 저장
        //1.1.2: [For all CorporateMember's Employment] getDetailEmployment()

        fout << " >" << part << " " << numPeople << " " << deadLine << "\n"; // 업무,인원수,마감일 리스트 출력
    }
    fout << "\n";
}
