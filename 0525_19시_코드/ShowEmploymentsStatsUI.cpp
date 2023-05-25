#include "ShowEmploymentsStatsUI.h"

ShowEmploymentsStatsUI::ShowEmploymentsStatsUI(ShowEmploymentsStats* control) {
	ShowEmploymentsStats_control = control;
}
void ShowEmploymentsStatsUI::showMyEmploymentsStats(CorporateMember* curMem) {
	ShowEmploymentsStats_control->showEmploymentsStats(curMem);
}