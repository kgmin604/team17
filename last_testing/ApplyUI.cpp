#include "ApplyUI.h"

ApplyUI::ApplyUI(Apply* control) {
	Apply_control = control;
}
void ApplyUI::apply(GeneralMember* cur_mem, string business_number, MemberDB& mem_db) {
	Apply_control->applyEmployment(cur_mem, business_number, mem_db);
}