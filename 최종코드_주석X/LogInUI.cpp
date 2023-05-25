#include "LogInUI.h"

/*
* <<boundary>>
- 클래스 이름: LogInUI
- 클래스 설명: 사용자로부터 로그인 요청이 들어오면 받은 정보값(id, pw 등)을 LogIn <<control>>에 전달한다.
*/

LogInUI::LogInUI(LogIn* control) {
	LogIn_control = control;
}

void LogInUI::requestLogIn(Member*& curMem, string id, string password, MemberDB& memDB) {
	//LogIn <<control>>에 현재 멤버, id, password, MemDB값을 전달한다.
	LogIn_control->findMember(curMem, id, password, memDB);
}
