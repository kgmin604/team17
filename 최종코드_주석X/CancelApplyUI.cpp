#include "CancelApplyUI.h"

CancelApplyUI::CancelApplyUI(CancelApply* control) {
	CancelApply_control = control;
}

void CancelApplyUI::requestCancelApply(GeneralMember* curMem, string business_number, MemberDB& memDB) {
	CancelApply_control->cancelApply(curMem, business_number, memDB);
}