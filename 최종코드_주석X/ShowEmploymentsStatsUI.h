/*
* <<boundary>>
- 클래스 이름: ShowEmploymentsStatsUI
- 클래스 설명: 회사 회원으로부터 지원 정보 통계 요청이 들어오면 해당 회원 정보 curMem을 ShowEmploymentsStats<<control>>에 전달한다.
*/

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
