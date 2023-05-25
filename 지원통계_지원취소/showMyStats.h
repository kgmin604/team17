#ifndef __showMyStats_H
#define __showMyStats_H

#include "GeneralMember.h"

/*
* showMyStats 클래스
* 현재 로그인 된 회사회원의 업무별 지원 횟수를 알려주는 통계 기능이 있다.
*/

class showMyStats {
public:
	void showApplicationsStats(GeneralMember* curMem);
};

#endif // !__showMyStats_H
