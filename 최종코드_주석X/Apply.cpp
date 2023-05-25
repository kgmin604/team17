#include "Apply.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;
extern ofstream fout;

void Apply::applyEmployment(GeneralMember* curMem, string businessNumber, MemberDB& memDB) {
	vector<Member*>& mem_list = memDB.getMemberList();
	string ref_name;
	vector<Employment*> emp_list;
	
	for (int i = 0; i < mem_list.size(); i++) {
		if(mem_list[i]->getType() == 1)
			if (mem_list[i]->getNumber() == businessNumber) {
				ref_name = mem_list[i]->getName();
				emp_list = ((CorporateMember*)mem_list[i])->getEmploymentList(); // 1.1.1
				break;
			}
	}
	string ref_part, ref_application_deadline;
	int ref_number_of_people;
	Employment* target_emp = emp_list.back();
	target_emp->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline); // 1.1.2
	Application* newApp = new Application(ref_part, ref_name, businessNumber, ref_number_of_people, ref_application_deadline); // 1.1.3
	newApp->getDetailApplication(ref_part, ref_name, businessNumber, ref_number_of_people, ref_application_deadline);

	curMem->addApplication(newApp); // 1.1.4
	target_emp->addApplication(newApp); // 1.1.5

	fout << "4.2. 채용 지원\n";
	fout << "> " << ref_name << " " << businessNumber << " " << ref_part << "\n";
	fout << "\n";
}