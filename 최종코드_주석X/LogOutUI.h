#ifndef LogOutUI_H
#define LogOutUI_H

#include "LogOut.h"
class LogOutUI {
	LogOut* LogOut_control;
public:
	LogOutUI(LogOut* control);
	void requestLogOut(Member*& curMem);
};

#endif
