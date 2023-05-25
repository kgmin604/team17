#ifndef __LogInUI_H
#define __LogInUI_H
 
#include "LogIn.h"

/*
* <<boundary>>
- Ŭ���� �̸�: LogInUI
- Ŭ���� ����: ����ڷκ��� �α��� ��û�� ������ ���� ������(id, pw ��)�� LogIn <<control>>�� �����Ѵ�.
*/

class LogInUI {
	LogIn* LogIn_control;
public:
	LogInUI(LogIn* control);

	//LogIn <<control>>�� ���� ���, id, password, MemDB���� �����Ѵ�.
	void requestLogIn(Member*& curMem, string id, string password, MemberDB& memDB);
};


#endif // !__LogInUI_H
