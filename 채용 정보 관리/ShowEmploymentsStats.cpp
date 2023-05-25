#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowEmploymentsStats.h"

using namespace std;
extern ofstream fout;

//채용 정보 통계
//회사 회원의 채용 리스트 > [업무] [지원자 수] 형태로 출력

void ShowEmploymentsStats::showEmploymentsStats(CoporateMember *curMem){
    
    string name; string part; int num, int numPeople; int countApplication; string deadLine;
    
    
    vector<employment*>& list = curMem.getEmploymentList();
    //회사 회원의 EmploymentList 가져오기
    //1.1.1: getEmploymentList()
    

    fout<< "3.2. 등록된 채용 정보 조회 \n";
    
    for ( const auto& employment : list) {
        employment->getDetailEmployment(name,part,num,numPeople,countApplication,deadLine);
        //각 EmploymentList의 detail 반환하여 저장
        //  1.1.2: [For all CorporateMember's Employment] getDetailEmployment()
        fout<<" >"<< part<<" "<<countApplication<< endl; // 채용 정보 통계 출력 (업무, 지원자 수)
        }

}
