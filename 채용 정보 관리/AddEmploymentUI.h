
#ifndef AddEmploymentUI_h
#define AddEmploymentUI_h


#include "AddEmployment.h"

// AddEmployment control

class AddEmploymentUI
{
private:
    AddEmployment *AddEmployment_control;
    
public:
    AddEmploymentUI(AddEmployment* control)
    void addEmploymentUI(coporateMember *curMem, string part,int NumberOfPeople, string applicationDeadline);
;
};

#endif /* AddEmploymentUI_h */
