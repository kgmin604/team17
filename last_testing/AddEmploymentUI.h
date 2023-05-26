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
    // 사용자로부터 현재 로그인된 사용자, 업무, 인원, 마감일을 입력받아 control 클래스의 addNewEmployment 함수를 호출한다.
    AddEmploymentUI(AddEmployment* control);
    void addEmployment(CorporateMember* cur_mem, string part, int number_of_people, string application_deadline);
        
};

#endif /* AddEmploymentUI_h */
