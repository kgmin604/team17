#ifndef __SignUp_H
#define __SignUp_H

#include <string>
#include "MemberDB.h"

/*
<<control>>
- 클래스 이름: SignUp
- 클래스 설명: SignUpUI <<boundary>>로부터 받은 정보를 이용해 회원가입을 진행한다.
*/

class SignUp {
public:
	//type이 1이라면 회사회원, 2라면 일반회원의 회원가입을 진행한다. 새로운 member를 생성하고, 이를 mem_db에 저장한다. 이후 이를 파일에 출력한다.
	void addNewMember(int type, string id, string password, string name, string number, MemberDB& mem_db);
};

#endif
