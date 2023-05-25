#include "showMyStatsUI.h"

showMyStatsUI::showMyStatsUI(showMyStats* control) {
	showMyStats_control = control;
}

void showMyStatsUI::showMyApplicationsStats(GeneralMember* curMem) {
	showMyStats_control->showApplicationsStats(curMem);
}