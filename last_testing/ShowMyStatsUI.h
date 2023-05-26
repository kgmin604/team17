#ifndef __ShowMyStatsUI_H
#define __ShowMyStatsUI_H

#include "ShowMyStats.h"

/*
    <<boundary>>
    - 클래스 이름: ShowMyStatsUI
    - 클래스 설명:
    사용자에게 지원 정보 통계 요청을 받은후 요청을 control클래스에 넘겨준다.
*/

class ShowMyStatsUI {
	ShowMyStats* ShowMyStats_control;
public:
	ShowMyStatsUI(ShowMyStats* control);
    // 현재 로그인 된 멤버 객체를 전달받아 control 객체에 지원 정보 통계 요청을 한다.
	void showMyApplicationsStats(GeneralMember* cur_mem);
};

#endif // !__ShowMyStatsUI_H
