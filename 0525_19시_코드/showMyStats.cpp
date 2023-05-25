#include "showMyStats.h"
#include <vector>
#include <map> 
#include <fstream>

using namespace std;
extern ofstream fout;

void showMyStats::showApplicationsStats(GeneralMember* curMem) {
	/*������ ������*/
	string ref_part, ref_company_name, ref_business_number, ref_application_deadline;
	int ref_number_of_people;

	/*���� ����� �����̳�*/
	map<string, int> stats;

	vector<Application*>& apps = curMem->getApplicationList(); // 1.1.1
	for (int i = 0; i < apps.size(); i++) {
		apps[i]->getDetailApplication(ref_part, ref_company_name, ref_business_number, ref_number_of_people, ref_application_deadline); // 1.1.2

		if (stats.find(ref_part) != stats.end()) { // �̹� �����ϴ� ������ ���
			stats[ref_part]++;
		}
		else { // �������� �ʴ� ������ ���
			stats.insert({ ref_part ,1 });
		}
	}

	fout << "5.1. ���� ���� ���\n";
	map<string, int>::iterator it;
	for (it = stats.begin(); it != stats.end();it++) {
		fout << "> " << (*it).first << " " << (*it).second << "\n";
	}
	fout << "\n";

}