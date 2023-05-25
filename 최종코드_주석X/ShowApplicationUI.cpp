#include "ShowApplicationUI.h"

ShowApplicationUI::ShowApplicationUI(ShowApplication* control)
{
    ShowApplication_control = control;
}

void ShowApplicationUI::requestShowApplication(GeneralMember* curMem)
{
    ShowApplication_control->requestShowApplication(curMem);
}
