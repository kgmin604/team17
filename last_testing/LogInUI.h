#ifndef __LogInUI_H
#define __LogInUI_H
 
#include "LogIn.h"

/*
* <<boundary>>
- 클래스 이름: LogInUI
- 클래스 설명: 사용자로부터 로그인 요청이 들어오면 받은 정보값(id, pw 등)을 LogIn <<control>>에 전달한다.
*/

class LogInUI {
	LogIn* LogIn_control;
public:
	LogInUI(LogIn* control);
	
	//LogIn <<control>>에 현재 멤버, id, password, mem_db값을 전달한다.
	void requestLogIn(Member*& cur_mem, string id, string password, MemberDB& mem_db);
};


#endif // !__LogInUI_H
