#ifndef __LogInUI_H
#define __LogInUI_H
 
#include "LogIn.h"

class LogInUI {
	LogIn* LogIn_control;
public:
	LogInUI(LogIn* control);
	void requestLogIn(Member*& curMem, string id, string password, MemberDB& memDB);
};


#endif // !__LogInUI_H
