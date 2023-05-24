
#ifndef AddEmployment_h
#define AddEmployment_h

#include <stdio.h>
#include <string>
#include "Member.h"
#include "CoporateMember.h"

#include "Employment.h"

using namespace std;

#endif /* AddEmployment_hpp */

class AddEmployment
{
public:
    void addEmployment();
    void addNewEmployment(Member* curMem, string part,int NumberOfPeople, string applicationDeadline);
    
};
