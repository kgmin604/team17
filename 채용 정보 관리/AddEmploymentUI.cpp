#include "AddEmploymentUI.h"

AddEmploymentUI::AddEmploymentUI(AddEmployment* control){
    AddEmployment_control = control;
}

void AddEmploymentUI::addEmploymentUI(CoporateMember *curMem, string part,int NumberOfPeople, string applicationDeadline){
    
    AddEmployment_control_control->addNewEmployment(curMem,part,NumberOfPeople,applicationDeadline);
    //1.1 addNewEmployment()
}

