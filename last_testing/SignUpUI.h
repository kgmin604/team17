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
	
	// 사용자로부터 회원 종류, 아이디, 비밀번호, 이름, 번호, 멤버DB를 전달받아 control 객체에 회원가입 요청을 한다.
	void requestSignUp(int type, string id, string password, string name, string number, MemberDB& mem_db);
};

#endif
