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
    //전달받은 값으로 Employment 생성
    //1.1.1: Employment()

    curMem->addNewEmployment(newEmp);
    //EmploymentCollecttion에 Employment 추가
    //1.1.2: addNewEmployment()

    fout << "3.1. 채용 정보 등록 \n";
    fout << "> " << part << " " << NumberOfPeople << " " << applicationDeadline << "\n";
    fout << "\n";
}

