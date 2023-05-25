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

void SearchEmployment::showEmploymentList(GeneralMember* curMem, string coporationName, MemberDB& memDB)
{
    string ref_part,
        ref_company_name, ref_business_number, ref_application_deadline;
    int ref_number_of_people;

    auto& apps = curMem->getApplicationList();

    vector<CorporateMember*> matchedCorporateMembers;
    auto& members = memDB.getMemberList();

    for (auto& member : members)
    {
        auto matchcoporateMember = dynamic_cast<CorporateMember*>(member);
        if (matchcoporateMember != nullptr && matchcoporateMember->getName() == coporationName)
        {
            matchedCorporateMembers.push_back(matchcoporateMember);
        }
    }

    fout << "4.1. 채용 정보 검색\n";
    for (auto matchcorporateMember : matchedCorporateMembers)
    {
        //ref_company_name = matchcorporateMember->getName();
        //ref_business_number = matchcorporateMember->getNumber();
        auto employmentList = matchcorporateMember->getEmploymentList();

        for (auto employment : employmentList)
        {
            employment->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline);
            cout << ref_part << " " << ref_number_of_people << " " << ref_application_deadline;
            //fout << ">" << ref_company_name << " " << ref_business_number << " " << ref_part << " " << ref_number_of_people << " " << ref_application_deadline << "\n";
        }
    }
    fout << "\n";
};
