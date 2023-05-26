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
	
	//현재멤버 정보(cur_mem), memberDB에 저장된 member정보(mem_db)를 DeleteAccount <<control>>에 전달한다.
	void deleteMember(Member*& cur_mem, MemberDB& mem_db);
};
#endif // !__DeleteAccount_H
