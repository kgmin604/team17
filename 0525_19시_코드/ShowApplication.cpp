#include <iostream>
#include <string>
#include <vector>
#include "ShowApplication.h"
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
#include <map>
#include <fstream>

extern ofstream fout;
using namespace std;



void ShowApplication::requestShowApplication(GeneralMember* curMem)
{
    /*참조용 변수들*/
    string ref_part, ref_company_name, ref_business_number, ref_application_deadline;
    int ref_number_of_people;




    vector<Application*>& apps = curMem->getApplicationList(); // 1.1.1
    for (int i = 0; i < apps.size(); i++)
    {
        apps[i]->getDetailApplication(ref_part, ref_company_name, ref_business_number, ref_number_of_people, ref_application_deadline); // 1.1.2


        fout << "4.3. 지원 정보 조회\n";


        fout << "> " << ref_company_name << " " << ref_business_number << " " << ref_part << " " << ref_number_of_people << " " << ref_application_deadline << "\n";

    }
    fout << "\n";
};
