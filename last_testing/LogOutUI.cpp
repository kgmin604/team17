#include "LogOutUI.h"

LogOutUI::LogOutUI(LogOut* control) {
	LogOut_control = control;
}
void LogOutUI::requestLogOut(Member*& cur_mem) {
	LogOut_control->requestLogOut(cur_mem);
}