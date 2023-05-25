#include "ShowMyEmploymentsUI.h"

ShowMyEmploymentsUI::ShowMyEmploymentsUI(ShowMyEmployments* control) {
    ShowMyEmployments_control = control;
}

void ShowMyEmploymentsUI::showMyEmployments(CorporateMember* curMem){
    ShowMyEmployments_control->showEmployments(curMem);
    //1.1: showEmployments()
}