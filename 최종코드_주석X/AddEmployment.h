
#ifndef AddEmployment_h
#define AddEmployment_h

#include "Member.h"
#include "CorporateMember.h"

//AddEmployment
//채용 정보 등록


class AddEmployment
{
public:
    void addNewEmployment(CorporateMember* curMem, string part, int NumberOfPeople, string applicationDeadline);
};


#endif /* AddEmployment_hpp */
