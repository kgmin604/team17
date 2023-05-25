#ifndef __DeleteAccount_H
#define __DeleteAccount_H

#include "MemberDB.h"

/*
<<control>>
- 클래스 이름: DeleteAccount
- 클래스 설명: DeleteAccountUI <<boundary>>로부터 전달받은 정보를 이용해 회원 탈퇴를 처리한다.
*/


class DeleteAccount {
public:
	//전달받은 curMem, memDB값을 NULL, detele 처리하여 회원정보를 삭제한다. 이후 이 정보를 파일에 출력한다.
	void deteleMember(Member*& curMem, MemberDB& memDB);
};

#endif
