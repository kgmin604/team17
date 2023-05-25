#ifndef __LogIn_H
#define __LogIn_H

#include "MemberDB.h"
#include <string.h>

/*
<<control>>
- 클래스 이름: LogIn
- 클래스 설명: LogInUI <<boundary>>로부터 호출되어 전달받은 정보(id, pw 등)를 이용해 member를 찾아 해당 정보가 memDB에 있다면 로그인처리한다.
*/

class LogIn {
public:
	//들어온 정보와 저장해놓은 member정보(memDB)를 비교해 member를 찾고, 해당 member가 있다면 로그인처리한다. 이후 이 정보를 파일에 출력한다.
	void findMember(Member*& curMem, string id, string password, MemberDB& memDB);
};


#endif // !__LogIn_H