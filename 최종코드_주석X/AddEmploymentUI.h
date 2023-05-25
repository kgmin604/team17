/*
* <<boundary>>
- 클래스 이름: AddEmploymentUI
- 클래스 설명: 회사 회원에게서 받은 채용 정보(업무, 인원 수, 신청 마감일)를 AddEmployment<<control>>에 전달한다.
*/

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
