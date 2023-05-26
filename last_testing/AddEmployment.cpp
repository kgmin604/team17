#include <stdio.h>
#include <string>

#include "Employment.h"
#include "AddEmployment.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void AddEmployment::addNewEmployment(CorporateMember* cur_mem, string part, int number_of_people, string application_deadline)
{
    Employment* newEmp = new Employment(part, number_of_people, application_deadline);
    //���޹��� ������ Employment ����
    //1.1.1: Employment()

    cur_mem->addNewEmployment(newEmp);
    //EmploymentCollecttion�� Employment �߰�
    //1.1.2: addNewEmployment()
   
    fout << "3.1. ä�� ���� ��� \n";
    fout << "> " << part << " " << number_of_people << " " << application_deadline << "\n";
    fout << "\n";
}

