#include "LogOutUI.h"

LogOutUI::LogOutUI(LogOut* control) {
	LogOut_control = control;
}
void LogOutUI::requestLogOut(Member* curMem) {
	LogOut_control->requestLogOut(curMem);
}