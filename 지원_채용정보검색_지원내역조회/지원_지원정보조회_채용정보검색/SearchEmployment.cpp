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

void SearchEmployment::showEmploymentList(GeneralMember *curMem, string coporationName, MemberDB &memDB)
{
    
    string ref_part,
        ref_company_name, ref_business_number, ref_application_deadline;
    int ref_number_of_people;

    ref_company_name=coporationName;

    vector<Application *> &apps = curMem->getApplicationList(); // 1.1.1

    
    vector<CorporateMember *> matchedCorporateMembers;
    vector<Member *> &members = memDB.getMemberList();

    for (Member *member : members)
    {
        CorporateMember *matchcoporateMember = dynamic_cast<CorporateMember *>(member);
        if (matchcoporateMember != nullptr && matchcoporateMember->getName() == coporationName)
        {
            matchedCorporateMembers.push_back(matchcoporateMember);
        }
    }
    
    for (CorporateMember *matchcorporateMember : matchedCorporateMembers)
    {
        ref_business_number = matchcorporateMember->getNumber();
        vector<Employment *> employmentList = matchcorporateMember->getEmploymentList();

        for (Employment *employment : employmentList)
        {
            

            employment->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline);

            fout << ">" << ref_company_name << " " << ref_business_number << " " << ref_part << " " << ref_number_of_people << " " << ref_application_deadline << "\n";
        }
    }
    fout<<"\n";
};
