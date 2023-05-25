#include "ApplyUI.h"

ApplyUI::ApplyUI(Apply *control)
{
    Apply_control = control;
}

void ApplyUI::applys(GeneralMember *curMem, string coporationNumber, MemberDB &memDB)
{
    Apply_control->applyEmployment(curMem, coporationNumber, memDB);
}
