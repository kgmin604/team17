#ifndef __DeleteAccountUI_H
#define __DeleteAccountUI_H

#include "DeleteAccount.h"

class DeleteAccountUI {
	DeleteAccount* DeleteAccount_control;
public:
	DeleteAccountUI(DeleteAccount* control);
	void deleteMember(Member*& curMem, MemberDB& memDB);
};
#endif // !__DeleteAccount_H
