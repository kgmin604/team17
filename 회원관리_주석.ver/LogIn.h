#ifndef __LogIn_H
#define __LogIn_H

#include "MemberDB.h"
#include <string.h>

/*
<<control>>
- Ŭ���� �̸�: LogIn
- Ŭ���� ����: LogInUI <<boundary>>�κ��� ȣ��Ǿ� ���޹��� ����(id, pw ��)�� �̿��� member�� ã�� �ش� ������ memDB�� �ִٸ� �α���ó���Ѵ�.
*/

class LogIn {
public:
	//���� ������ �����س��� member����(memDB)�� ���� member�� ã��, �ش� member�� �ִٸ� �α���ó���Ѵ�. ���� �� ������ ���Ͽ� ����Ѵ�.
	void findMember(Member*& curMem, string id, string password, MemberDB& memDB);
};


#endif // !__LogIn_H