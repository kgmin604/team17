#ifndef __DeleteAccount_H
#define __DeleteAccount_H

#include "MemberDB.h"

/*
<<control>>
- Ŭ���� �̸�: DeleteAccount
- Ŭ���� ����: DeleteAccountUI <<boundary>>�κ��� ���޹��� ������ �̿��� ȸ�� Ż�� ó���Ѵ�.
*/

class DeleteAccount {
public:
	//���޹��� curMem, memDB���� NULL, detele ó���Ͽ� ȸ�������� �����Ѵ�. ���� �� ������ ���Ͽ� ����Ѵ�.
	void deteleMember(Member*& curMem, MemberDB& memDB);
};

#endif