#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowEmploymentsStats.h"
#include <map>
#include <fstream>

using namespace std;
extern ofstream fout;

//채용 정보 통계
//회사 회원의 채용 리스트 > [업무] [지원자 수] 형태로 출력

void ShowEmploymentsStats::showEmploymentsStats(CorporateMember* curMem) {

    string part; int numPeople;  string deadLine;
    //참조용 지역변수 선언

    vector<Employment*>& list = curMem->getEmploymentList();
    //회사 회원의 EmploymentList 가져오기
    //1.1.1: getEmploymentList()

    map<string, int> stats;
    for(int i=0;i<list.size();i++){
        list[i]->getDetailEmployment(part, numPeople, deadLine);
        int num_of_apps = list[i]->getNumberOfApps();
        cout << part << " " << num_of_apps << "\n";
        //각 EmploymentList의 detail 반환하여 저장
        //  1.1.2: [For all CorporateMember's Employment] getDetailEmployment()
        if (stats.find(part) == stats.end()) { // 통계 내역에 없는 업무라면
            stats.insert({ part,num_of_apps });
        }
        else { // 통계 내역에 있는 업무라면
            stats[part] += num_of_apps;
        }
    }

    fout << "5.1.지원 정보 통계 \n";
    map<string, int>::iterator it;
    for (it = stats.begin(); it != stats.end(); it++) // stats map에 있는 원소들 순회
        fout << " >" << (*it).first << " " << (*it).second << "\n"; // 채용 정보 통계 출력 (업무, 지원자 수)
    fout << "\n";
}
