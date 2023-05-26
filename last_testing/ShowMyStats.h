#ifndef __ShowMyStats_H
#define __ShowMyStats_H

#include "GeneralMember.h"

/*
* <<control>>
- 클래스 이름: ShowMyStatsnt
- 클래스 설명: AddEmploymentUI<<boundary>>에서 전달받은 현재 로그인된 멤버의 업무별 지원 횟수를 출력한다.
*/

class ShowMyStats {
public:
	// 현재 로그인 된 멤버 객체를 전달받아 로그인된 멤버의 업무별 지원 횟수를 출력한다.
	void showApplicationsStats(GeneralMember* cur_mem);
};

#endif // !__ShowMyStats_H
