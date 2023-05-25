#ifndef __DeleteAccountUI_H
#define __DeleteAccountUI_H

#include "DeleteAccount.h"

/*
<<boundary>> 
- 클래스 이름: DeleteAccountUI
- 클래스 설명: 사용자로부터 회원탈퇴 요청을 받은 후 DeleteAccount <<control>>에 멤버 정보를 전달한다.
*/

class DeleteAccountUI {
	DeleteAccount* DeleteAccount_control;
public:
	DeleteAccountUI(DeleteAccount* control);
	
	//현재멤버 정보(curMem), memberDB에 저장된 member정보(memDB)를 DeleteAccount <<control>>에 전달한다.
	void deleteMember(Member*& curMem, MemberDB& memDB);
};
#endif // !__DeleteAccount_H
