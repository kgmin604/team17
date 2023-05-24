
#include "AddEmployment.h"

void AddEmployment::AddEmployment()
{}

void AddEmployment::AddEmployment(coporateMember *curMem, string part,int NumberOfPeople, string applicationDeadline)
{
    newEmp* Employment =new Employment(part,NumberOfPeople,applicationDeadline);
    
    curMem.EmploymentCollecttion.push_back(newEmp);
    
    cout<<"> "<<part<<" "<<NumberOfPeople<<" "<<applicationDeadline<<endl;
}

