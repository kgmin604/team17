#include "ApplyUI.h"

ApplyUI::ApplyUI(Apply* control)
{
    Apply_control = control;
}

void ApplyUI::applys(GeneralMember* curMem, string businessNumber, MemberDB& memDB)
{
    Apply_control->applyEmployment(curMem, businessNumber, memDB);
}
