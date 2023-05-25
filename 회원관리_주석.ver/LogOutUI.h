#ifndef LogOutUI_H
#define LogOutUI_H

#include "LogOut.h"

/*
<<boundary>>
- 클래스 이름: LogOutUI
- 클래스 설명: 사용자로부터 로그아웃 요청을 받은 후 이를 LogOut conrtol에 전달한다.
*/

class LogOutUI {
	LogOut* LogOut_control;
public:
	LogOutUI(LogOut* control);

	//LogOut <<control>>에 현재 멤버값을 전달한다.
	void requestLogOut(Member* curMem);
};

#endif
