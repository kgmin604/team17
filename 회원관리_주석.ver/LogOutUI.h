#ifndef LogOutUI_H
#define LogOutUI_H

#include "LogOut.h"

/*
<<boundary>>
- Ŭ���� �̸�: LogOutUI
- Ŭ���� ����: ����ڷκ��� �α׾ƿ� ��û�� ���� �� �̸� LogOut conrtol�� �����Ѵ�.
*/

class LogOutUI {
	LogOut* LogOut_control;
public:
	LogOutUI(LogOut* control);

	//LogOut <<control>>�� ���� ������� �����Ѵ�.
	void requestLogOut(Member* curMem);
};

#endif
