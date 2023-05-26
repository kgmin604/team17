/*
* <<control>>
- 클래스 이름: ShowMyEmployments
- 클래스 설명: ShowMyEmploymentsUI<<boundary>>에서 회사 회원 정보를 입력받고, 해당 회사 회원의 채용 정보 리스트(업무,인원수,마감일)을 출력한다.
*/


#ifndef ShowMyEmployments_h
#define ShowMyEmployments_h

#include "CorporateMember.h"

// ShowMyEmployments 
// 회사 회원이 등록한 채용 리스트를 모두 출력


class ShowMyEmployments
{
public:
	// 현재 로그인 된 멤버 객체를 전달받아 Employment 리스트를 출력한다.
	void showEmployments(CorporateMember* cur_mem);
};

#endif /* ShowMyEmployments_hpp */

