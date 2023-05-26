/*
* <<control>>
- 클래스 이름: ShowEmploymentsStats
- 클래스 설명: ShowEmploymentsStatsUI<<boundary>>에서 전달받은 회사 회원 정보를 이용해 채용 정보 리스트를 가져오고, 지원 통계를 출력한다.
*/

#ifndef __ShowEmploymentsStats_H
#define __ShowEmploymentsStats_H
#include "CorporateMember.h"

//ShowEmploymentsStats
//회사 회원이 등록한 채용 정보 통계 출력

class ShowEmploymentsStats
{
public:
	// 현재 로그인 된 멤버 객체를 전달받아 지원 통계를 출력한다.
	void showEmploymentsStats(CorporateMember* cur_mem);
};

#endif // !__ShowEmploymentsStats_H

