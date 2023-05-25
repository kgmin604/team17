#include "SearchEmploymentUI.h"

SearchEmploymentUI::SearchEmploymentUI(SearchEmployment* control)
{
    SearchEmployment_control = control;
}

void SearchEmploymentUI::SearchEmployments(GeneralMember* curMem, string corporationName, MemberDB& memDB)
{
    SearchEmployment_control->showEmploymentList(curMem, corporationName, memDB);
}