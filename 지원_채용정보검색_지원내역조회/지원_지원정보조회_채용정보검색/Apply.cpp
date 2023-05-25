#include <iostream>
#include <string>
#include <vector>
#include "Apply.h"
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
#include <map>
#include <fstream>

extern ofstream fout;
using namespace std;


void Apply::applyEmployment(GeneralMember *curMem, string businessNumber, MemberDB &memDB)
{
    string ref_part, ref_company_name, ref_business_number, ref_application_deadline;
    int ref_number_of_people;

    ref_business_number=businessNumber;
    vector<Member *> &memberList = memDB.getMemberList();
    CorporateMember *matchCorporateMember = nullptr;

   
    for (Member *member : memberList)
    {
        CorporateMember *corpMember = dynamic_cast<CorporateMember *>(member);
        if (corpMember && corpMember->getNumber() == businessNumber)
        {
            matchCorporateMember = corpMember;
            break;
        }
    }


    
    vector<Employment *> &employmentList = matchCorporateMember->getEmploymentList();
    Employment *employment = employmentList[0]; 

    employment->getDetailEmployment(ref_part, ref_number_of_people, ref_application_deadline);
    ref_company_name = matchCorporateMember->getName();

    Application *newApp = new Application(ref_part,ref_company_name, ref_business_number, ref_number_of_people, ref_application_deadline);
    employment->addApplication(newApp);//Employment추가
    curMem->addApplication(newApp);//GeneralMember추가
    //회사이름 번호 업무
    fout<<"> "<< ref_company_name <<" "<<ref_business_nuber<<" "<<ref_part<<"\n";
    fout<<"\n";
}
