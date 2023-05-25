#ifndef __LogOut_H
#define __LogOut_H
#include "Member.h"

/*
* <<control>>
- Ŭ���� �̸�: LogOut
- Ŭ���� ����: LogOutUI <<boundary>>�κ��� ȣ��Ǿ� ���� Member�� �α׾ƿ� ó���Ѵ�.
*/

class LogOut {
public:
	//���� ����� ������ ����ִ� curMem�� ���� NULL�� �����Ѵ�. ���� �� ���� ���Ͽ� ����Ѵ�.
	void requestLogOut(Member* curMem);
};

#endif // !__LogOut_H
