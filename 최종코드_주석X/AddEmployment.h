/*
* <<control>>
- 클래스 이름: AddEmployment
- 클래스 설명: AddEmploymentUI에서 전달받은 정보값(업무, 인원 수, 신청 마감일)로 채용 정보를 생성하고, 채용 정보 리스트에 추가한다.
*/


#ifndef AddEmployment_h
#define AddEmployment_h

#include "Member.h"
#include "CorporateMember.h"


class AddEmployment
{
public:
    void addNewEmployment(CorporateMember* curMem, string part, int NumberOfPeople, string applicationDeadline);
};


#endif /* AddEmployment_hpp */
