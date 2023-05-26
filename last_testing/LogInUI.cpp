#include "LogInUI.h"

LogInUI::LogInUI(LogIn* control) {
	LogIn_control = control;
}

void LogInUI::requestLogIn(Member*& cur_mem, string id, string password, MemberDB& mem_db) {
	LogIn_control->findMember(cur_mem, id, password, mem_db);
}
