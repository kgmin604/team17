/*
* <<control>>
- 클래스 이름: AddEmployment
- 클래스 설명: AddEmploymentUI<<boundary>>에서 전달받은 정보값(업무, 인원 수, 신청 마감일)로 채용 정보를 생성하고, 채용 정보 리스트에 추가한다.
*/


#ifndef AddEmployment_h
#define AddEmployment_h

#include "Member.h"
#include "CorporateMember.h"


class AddEmployment
{
public:
    // 사용자로부터 현재 로그인된 사용자, 업무, 인원, 마감일을 입력받아 채용 공고를 생성하고 cur_mem의 EmploymentCollection 객체에 추가한다.
    void addNewEmployment(CorporateMember* cur_mem, string part, int number_of_people, string application_deadline);
       
};


#endif /* AddEmployment_hpp */
