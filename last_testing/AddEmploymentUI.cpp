#include "AddEmploymentUI.h"

AddEmploymentUI::AddEmploymentUI(AddEmployment* control) {
    AddEmployment_control = control;
}

void AddEmploymentUI::addEmployment(CorporateMember* cur_mem, string part, int number_of_people, string application_deadline) {

    AddEmployment_control->addNewEmployment(cur_mem, part, number_of_people, application_deadline);
    //1.1 addNewEmployment()
}

