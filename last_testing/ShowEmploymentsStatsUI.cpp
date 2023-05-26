#include "ShowEmploymentsStatsUI.h"

ShowEmploymentsStatsUI::ShowEmploymentsStatsUI(ShowEmploymentsStats* control) {
	ShowEmploymentsStats_control = control;
}
void ShowEmploymentsStatsUI::showMyEmploymentsStats(CorporateMember* cur_mem) {
	ShowEmploymentsStats_control->showEmploymentsStats(cur_mem);
}