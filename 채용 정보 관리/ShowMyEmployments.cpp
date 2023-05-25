#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowMyEmployments.h"

using namespace std;
extern ofstream fout;


//채용 정보 리스트 출력


void ShowMyEmployments::showMyEmployments(CoporateMember *curMem){
    
    string name; string part; int num; int numPeople; int countApplication; string deadLine;
    //참조용 지역변수 선언
    
    vector<employment*>& list = curMem.getEmploymentList();
    //회사 회원의 EmploymentList 저장
    //1.1.1: getEmploymentList()
    
    fout<< "5.1. 지원 정보 통계 \n";

    for ( const auto& employment : list) {
        employment->getDetailEmployment(name,part,num,numPeople,deadLine);
        //각 EmploymentList의 detail 반환하여 저장
        //1.1.2: [For all CorporateMember's Employment] getDetailEmployment()
        
        fout<<" >"<< part<<" "<<numPeople<<" "<<deadLine<< "\n"; // 업무,인원수,마감일 리스트 출력
        }

}
