#include "ShowApplicationUI.h"

ShowApplicationUI::ShowApplicationUI(ShowApplication* control)
{
    ShowApplication_control = control;
}

void ShowApplicationUI::requestShowApplication(GeneralMember* cur_mem)
{
    ShowApplication_control->requestShowApplication(cur_mem);
}
