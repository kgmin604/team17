#include <iostream>
#include <string>
#include <vector>
#include "SearchEmployment.h"
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
#include <map>
#include <fstream>

extern ofstream fout;
using namespace std;

void SearchEmployment::showEmploymentList(GeneralMember* cur_mem, string corporation_name, MemberDB& mem_db)
{

    vector<Member*>& mem_list = mem_db.getMemberList();
    vector<Employment*> emp_list;
    string ref_business_number;

    for (int i = 0; i < mem_list.size(); i++) {
        if (mem_list[i]->getType() == 1)
            if (mem_list[i]->getName() == corporation_name) {
                emp_list = ((CorporateMember*)mem_list[i])->getEmploymentList(); // 1.1.1
                ref_business_number = mem_list[i]->getNumber();
                break;
            }
    }
    cout << emp_list.size();


    string ref_part, ref_application_deadline;
    int ref_number_of_people;
    
    fout << "4.1. 채용 정보 검색\n";
    for (int i = 0; i < emp_list.size(); i++) {
        emp_list[i]->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline); // 1.1.2
        fout << "> " << ref_part << " " << ref_business_number << " " << ref_part << " " << ref_number_of_people << "\n";
    }
    fout << "\n";

};