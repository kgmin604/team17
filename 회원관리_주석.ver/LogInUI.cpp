#include "LogInUI.h"

LogInUI::LogInUI(LogIn* control) {
	LogIn_control = control;
}

void LogInUI::requestLogIn(Member*& curMem, string id, string password, MemberDB& memDB) {
	LogIn_control->findMember(curMem, id, password, memDB);
}