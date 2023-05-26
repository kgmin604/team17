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



void ShowApplication::requestShowApplication(GeneralMember* cur_mem)
{
    /*������ ������*/
    string ref_part, ref_company_name, ref_business_number, ref_application_deadline;
    int ref_number_of_people;



    fout << "4.3. ���� ���� ��ȸ\n";
    vector<Application*>& apps = cur_mem->getApplicationList(); // 1.1.1
    for (int i = 0; i < apps.size(); i++)
    {
        apps[i]->getDetailApplication(ref_part, ref_company_name, ref_business_number, ref_number_of_people, ref_application_deadline); // 1.1.2


       


        fout << "> " << ref_company_name << " " << ref_business_number << " " << ref_part << " " << ref_number_of_people << " " << ref_application_deadline << "\n";

    }
    fout << "\n";
};
