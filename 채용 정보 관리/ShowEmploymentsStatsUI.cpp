
#include "ShowEmploymentsStatsUI.h"

ShowEmploymentsStatsUI(ShowEmploymentsStats *control){
    ShowEmploymentsStats_control = control;
}

void ShowEmploymentsStatsUI::showEmploymentsStatsUI(CoporateMember *curMem){
    ShowEmploymentsStats_control->showEmploymentsStats(curMem)
    //1.1: showEmploymentsStats()

}
