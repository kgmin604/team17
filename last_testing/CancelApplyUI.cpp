#include "CancelApplyUI.h"

CancelApplyUI::CancelApplyUI(CancelApply* control) {
	CancelApply_control = control;
}

void CancelApplyUI::requestCancelApply(GeneralMember* cur_mem, string business_number, MemberDB& mem_db) {
	CancelApply_control->cancelApply(cur_mem, business_number, mem_db);
}