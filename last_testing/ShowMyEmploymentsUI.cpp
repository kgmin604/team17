#include "ShowMyEmploymentsUI.h"

ShowMyEmploymentsUI::ShowMyEmploymentsUI(ShowMyEmployments* control) {
    ShowMyEmployments_control = control;
}

void ShowMyEmploymentsUI::showMyEmployments(CorporateMember* cur_mem){
    ShowMyEmployments_control->showEmployments(cur_mem);
    //1.1: showEmployments()
}