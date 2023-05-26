#ifndef __CancelApplyUI_H
#define __CancelApplyUI_H

#include <string>
#include "GeneralMember.h"
#include "CancelApply.h"

/*
<<boundary>>
- 클래스 이름: CancelApplyUI
- 클래스 설명: 일반 회원의 지원 취소 요청을 받아 CancelApply <<control>>에게 취소 요청
*/

class CancelApplyUI {
	CancelApply* CancelApply_control;
public:
	CancelApplyUI(CancelApply* control);

	// 현재 로그인된 멤버 객체, 사업자 번호, 멤버DB를 전달받아 control에 지원 취소 요청을 한다.
	void requestCancelApply(GeneralMember* cur_mem, string business_number, MemberDB& mem_db);
};

#endif // !__CancelApplyUI_H
