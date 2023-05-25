#include "SearchEmploymentUI.h"

SearchEmploymentUI::SearchEmploymentUI(SearchEmployment* control)
{
    SearchEmployment_control = control;
}

void SearchEmploymentUI::searchEmployments(GeneralMember* curMem, string coporationName, MemberDB& memDB)
{
    SearchEmployment_control->showEmploymentList(curMem, coporationName, memDB);
}
