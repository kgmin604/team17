#include "ShowApplicationUI.h"
#include "ShowApplication.h"
ShowApplicationUI::ShowApplicationUI(ShowApplication *control)
{
    ShowApplication_control = control;
}

void ShowApplicationUI::ShowApplicationss(GeneralMember *curMem)
{
    ShowApplication_control->ShowApplications(curMem);
}
