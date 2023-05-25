#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "CancelApply.h"
#include "Application.h"
using namespace std;
extern ofstream fout;

void CancelApply::cancelApply(GeneralMember* curMem, string business_number, MemberDB& memDB) {
	vector<Application*>& apps = curMem->getApplicationList();	// 1.1.1
	Application* cancle_app = NULL;
	string ref_part, ref_company_name, ref_business_number, ref_application_deadline;
	int ref_number_of_people;
	for (int i = 0; i < apps.size(); i++) {
		apps[i]->getDetailApplication(ref_part, ref_company_name, ref_business_number, ref_number_of_people, ref_application_deadline); // 1.1.2
		if (ref_business_number == business_number) {
			cancle_app = apps[i];
			break;
		}
	}
	curMem->deleteApplication(cancle_app); // 1.1.3

	vector<Member*>& member_list = memDB.getMemberList();
	for (int i = 0; i < member_list.size(); i++) {
		if (member_list[i]->getNumber() == business_number) {
			CorporateMember* target_corporate_member = (CorporateMember*)member_list[i];
			vector<Employment*>& employment_list = target_corporate_member->getEmploymentList(); // 1.1.4
			Employment* target_employment = employment_list.back(); // 가장 최근에 등록한 채용 공고를 타겟으로 설정
			target_employment->deleteApplication(cancle_app); // 1.1.5
			delete cancle_app;	// 1.1.6
			break;
		}
	}

	fout << "4.4. 지원 취소\n";
	fout << "> " << ref_company_name << " " << ref_business_number << " " << ref_part << "\n";
	fout << "\n";
}