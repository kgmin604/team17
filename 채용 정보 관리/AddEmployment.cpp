#include <stdio.h>
#include <string>

#include "Employment.h"
#include "AddEmployment.h"

using namespace std;
extern ofstream fout;

//

void AddEmployment::addNewEmployment(CoporateMember *curMem, string part,int NumberOfPeople, string applicationDeadline)
{
    newEmp* Employment =new Employment(part,NumberOfPeople,applicationDeadline);
    //전달받은 값으로 Employment 생성
    //1.1.1: Employment()
    
    curMem.EmploymentCollecttion.push_back(newEmp);
    //EmploymentCollecttion에 Employment 추가
    //1.1.2: addNewEmployment()
    
    fout<< "3.1. 채용 정보 등록 \n";
    fout<<"> "<<part<<" "<<NumberOfPeople<<" "<<applicationDeadline<<endl;
}

