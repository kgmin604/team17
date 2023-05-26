#ifndef __showMyStatsUI_H
#define __showMyStatsUI_H

#include "showMyStats.h"

/*
    <<boundary>>
    - 클래스 이름: showMyStatsUI
    - 클래스 설명:
    사용자에게 지원 정보 통계 요청을 받은후 요청을 control클래스에 넘겨준다.
*/

class showMyStatsUI {
	showMyStats* showMyStats_control;
public:
	showMyStatsUI(showMyStats* control);
	void showMyApplicationsStats(GeneralMember* curMem);
};

#endif // !__showMyStatsUI_H
