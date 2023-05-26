#ifndef __showMyStats_H
#define __showMyStats_H

#include "GeneralMember.h"

/*
* <<control>>
- 클래스 이름: showMyStatsnt
- 클래스 설명: AddEmploymentUI<<boundary>>에서 전달받은 현재 로그인된 멤버의 업무별 지원 횟수를 출력한다.
*/

class showMyStats {
public:
	void showApplicationsStats(GeneralMember* curMem);
};

#endif // !__showMyStats_H
