#ifndef __CancelApplyUI_H
#define __CancelApplyUI_H

#include <string>
#include "GeneralMember.h"
#include "CancelApply.h"

/*
* CancelApplyUI Ŭ����
* �Ϲ� ȸ���� ���� ��� ��û�� �޾� CancelApply(control class)���� ��� ��û
*/

class CancelApplyUI {
	CancelApply* CancelApply_control;
public:
	CancelApplyUI(CancelApply* control);
	void requestCancelApply(GeneralMember* curMem, string business_number, MemberDB& memDB);
};

#endif // !__CancelApplyUI_H
