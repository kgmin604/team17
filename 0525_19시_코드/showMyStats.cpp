#include "showMyStats.h"
#include <vector>
#include <map> 
#include <fstream>

using namespace std;
extern ofstream fout;

void showMyStats::showApplicationsStats(GeneralMember* curMem) {
	/*참조용 변수들*/
	string ref_part, ref_company_name, ref_business_number, ref_application_deadline;
	int ref_number_of_people;

	/*통계시 사용할 컨테이너*/
	map<string, int> stats;

	vector<Application*>& apps = curMem->getApplicationList(); // 1.1.1
	for (int i = 0; i < apps.size(); i++) {
		apps[i]->getDetailApplication(ref_part, ref_company_name, ref_business_number, ref_number_of_people, ref_application_deadline); // 1.1.2

		if (stats.find(ref_part) != stats.end()) { // 이미 존재하는 업무의 경우
			stats[ref_part]++;
		}
		else { // 존재하지 않는 업무의 경우
			stats.insert({ ref_part ,1 });
		}
	}

	fout << "5.1. 지원 정보 통계\n";
	map<string, int>::iterator it;
	for (it = stats.begin(); it != stats.end();it++) {
		fout << "> " << (*it).first << " " << (*it).second << "\n";
	}
	fout << "\n";

}