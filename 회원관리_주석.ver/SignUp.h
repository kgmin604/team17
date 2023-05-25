#ifndef __SignUp_H
#define __SignUp_H

#include <string>
#include "MemberDB.h"

/*
<<control>>
- Ŭ���� �̸�: SignUp
- Ŭ���� ����: SignUpUI <<boundary>>�κ��� ���� ������ �̿��� ȸ�������� �����Ѵ�.
*/

class SignUp {
public:
	//type�� 1�̶�� ȸ��ȸ��, 2��� �Ϲ�ȸ���� ȸ�������� �����Ѵ�. ���ο� member�� �����ϰ�, �̸� memDB�� �����Ѵ�. ���� �̸� ���Ͽ� ����Ѵ�.
	void addNewMember(int type, string id, string password, string name, string number, MemberDB& memDB);
};

#endif