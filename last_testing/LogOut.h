#ifndef __LogOut_H
#define __LogOut_H
#include "Member.h"

/*
* <<control>>
- 클래스 이름: LogOut
- 클래스 설명: LogOutUI <<boundary>>로부터 호출되어 현재 Member를 로그아웃 처리한다.
*/

class LogOut {
public:
	//현재 멤버의 정보를 담고있는 cur_mem의 값을 NULL로 변경한다. 이후 이 값을 파일에 출력한다.
	void requestLogOut(Member*& cur_mem);
};

#endif // !__LogOut_H
