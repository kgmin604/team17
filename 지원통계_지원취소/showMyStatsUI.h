#ifndef __showMyStatsUI_H
#define __showMyStatsUI_H

#include "showMyStats.h"

class showMyStatsUI {
	showMyStats* showMyStats_control;
public:
	showMyStatsUI(showMyStats* control);
	void showMyApplicationsStats(GeneralMember* curMem);
};

#endif // !__showMyStatsUI_H
