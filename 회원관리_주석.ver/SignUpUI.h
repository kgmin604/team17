#ifndef __SignUpUI_H
#define __SignUpUI_H

#include <string>
#include "SignUp.h"

/*
<<boundary>>
- Ŭ���� �̸�: SignUpUI
- Ŭ���� ����: ����ڷκ��� ���� ������ SignUp <<control>>�� �����Ѵ�.
*/

class SignUpUI {
	SignUp* SignUp_control;
public:
	SignUpUI(SignUp* control);

	//type, id, password, name, number, memDB�� �̿��� SignUp <<control>>�� �����Ѵ�.
	void requestSignUp(int type, string id, string password, string name, string number, MemberDB& memDB);
};

#endif