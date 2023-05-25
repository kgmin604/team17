#include "ShowMyEmploymentsUI.h"

ShowMyEmployments::showMyEmploymentsUI(ShowMyEmployments* control){
    showMyEmployments_control = control;
}

void ShowMyEmployments::showMyEmployments(CoporateMember *curMem){
    showMyEmployments_control->showMyEmployments(curMem);
    //1.1: showEmployments()
}

CoporateMember
