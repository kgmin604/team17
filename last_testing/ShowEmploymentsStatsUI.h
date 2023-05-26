/*
* <<boundary>>
- 클래스 이름: ShowEmploymentsStatsUI
- 클래스 설명: 회사 회원으로부터 지원 정보 통계 요청이 들어오면 해당 회원 정보 cur_mem을 ShowEmploymentsStats<<control>>에 전달한다.
*/

#ifndef _ShowEmploymentsStatsUI_H
#define _ShowEmploymentsStatsUI_H

#include "ShowEmploymentsStats.h"

class ShowEmploymentsStatsUI {
	ShowEmploymentsStats* ShowEmploymentsStats_control;
public:
	ShowEmploymentsStatsUI(ShowEmploymentsStats* control);
	// 현재 로그인 된 멤버 객체를 전달받아 control 객체에 지원 정보 통계 요청을 한다.
	void showMyEmploymentsStats(CorporateMember* cur_mem);
};

#endif
