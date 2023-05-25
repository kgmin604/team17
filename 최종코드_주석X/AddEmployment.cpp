#include <stdio.h>
#include <string>

#include "Employment.h"
#include "AddEmployment.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void AddEmployment::addNewEmployment(CorporateMember* curMem, string part, int NumberOfPeople, string applicationDeadline)
{
    Employment* newEmp = new Employment(part, NumberOfPeople, applicationDeadline);
    //���޹��� ������ Employment ����
    //1.1.1: Employment()

    curMem->addNewEmployment(newEmp);
    //EmploymentCollecttion�� Employment �߰�
    //1.1.2: addNewEmployment()

    fout << "3.1. ä�� ���� ��� \n";
    fout << "> " << part << " " << NumberOfPeople << " " << applicationDeadline << "\n";
    fout << "\n";
}

