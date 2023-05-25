#ifndef __SignUpUI_H
#define __SignUpUI_H

#include <string>
#include "SignUp.h"

class SignUpUI {
	SignUp* SignUp_control;
public:
	SignUpUI(SignUp* control);
	void requestSignUp(int type, string id, string password, string name, string number, MemberDB& memDB);
};

#endif