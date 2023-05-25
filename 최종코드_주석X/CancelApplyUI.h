#ifndef __CancelApplyUI_H
#define __CancelApplyUI_H

#include <string>
#include "GeneralMember.h"
#include "CancelApply.h"

/*
* CancelApplyUI 클래스
* 일반 회원의 지원 취소 요청을 받아 CancelApply(control class)에게 취소 요청
*/

class CancelApplyUI {
	CancelApply* CancelApply_control;
public:
	CancelApplyUI(CancelApply* control);
	void requestCancelApply(GeneralMember* curMem, string business_number, MemberDB& memDB);
};

#endif // !__CancelApplyUI_H
