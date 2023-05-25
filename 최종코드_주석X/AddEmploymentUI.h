
#ifndef AddEmploymentUI_h
#define AddEmploymentUI_h

#include "AddEmployment.h"

class AddEmploymentUI
{
private:
    AddEmployment* AddEmployment_control;

public:
    AddEmploymentUI(AddEmployment* control);
    void addEmployment(CorporateMember* curMem, string part, int NumberOfPeople, string applicationDeadline);
};

#endif /* AddEmploymentUI_h */
