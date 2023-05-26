#include "SearchEmploymentUI.h"

SearchEmploymentUI::SearchEmploymentUI(SearchEmployment* control)
{
    SearchEmployment_control = control;
}

void SearchEmploymentUI::SearchEmployments(GeneralMember* cur_mem, string corporation_name, MemberDB& mem_db)
{
    SearchEmployment_control->showEmploymentList(cur_mem, corporation_name, mem_db);
}