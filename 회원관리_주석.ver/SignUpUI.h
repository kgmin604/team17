#ifndef __SignUpUI_H
#define __SignUpUI_H

#include <string>
#include "SignUp.h"

/*
<<boundary>>
- 클래스 이름: SignUpUI
- 클래스 설명: 사용자로부터 받은 정보를 SignUp <<control>>에 전달한다.
*/

class SignUpUI {
	SignUp* SignUp_control;
public:
	SignUpUI(SignUp* control);

	//type, id, password, name, number, memDB를 이용해 SignUp <<control>>에 전달한다.
	void requestSignUp(int type, string id, string password, string name, string number, MemberDB& memDB);
};

#endif