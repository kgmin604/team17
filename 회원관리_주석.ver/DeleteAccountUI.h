#ifndef __DeleteAccountUI_H
#define __DeleteAccountUI_H

#include "DeleteAccount.h"


/*
<<boundary>> 
- Ŭ���� �̸�: DeleteAccountUI
- Ŭ���� ����: ����ڷκ��� ȸ��Ż�� ��û�� ���� �� DeleteAccount <<control>>�� ��� ������ �����Ѵ�.
*/

class DeleteAccountUI {
	DeleteAccount* DeleteAccount_control;
public:
	DeleteAccountUI(DeleteAccount* control);

	//������ ����(curMem), memberDB�� ����� member����(memDB)�� DeleteAccount <<control>>�� �����Ѵ�.
	void deleteMember(Member*& curMem, MemberDB& memDB);
};
#endif // !__DeleteAccount_H
