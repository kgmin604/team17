#ifndef _ShowEmploymentsStatsUI_H
#define _ShowEmploymentsStatsUI_H

#include "ShowEmploymentsStats.h"

class ShowEmploymentsStatsUI {
	ShowEmploymentsStats* ShowEmploymentsStats_control;
public:
	ShowEmploymentsStatsUI(ShowEmploymentsStats* control);
	void showMyEmploymentsStats(CorporateMember* curMem);
};

#endif