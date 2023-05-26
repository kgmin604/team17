#include "ShowMyStatsUI.h"

ShowMyStatsUI::ShowMyStatsUI(ShowMyStats* control) {
	ShowMyStats_control = control;
}

void ShowMyStatsUI::showMyApplicationsStats(GeneralMember* cur_mem) {
	ShowMyStats_control->showApplicationsStats(cur_mem);
}