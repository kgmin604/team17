#ifndef __CancelApply_H
#define __CancelApply_H

#include <string>
#include "GeneralMember.h"
#include "MemberDB.h"

/*
* CancelApplyUI Ŭ����
* ���� ȸ�� ����, ������ ����ϰ��� �ϴ� ����� ����� ��ȣ, ȸ�� ����� �Ű������� �޾�
* ����� ��ȣ�� ���� ������ ��û�� Application ��ü, �ش� ��ü�� ���� Employment�� ã��
* curMem�� ���� ����Ʈ���� �����ϰ�
* Eployment�� ���� ����Ʈ���� �����ϰ�
* ������ ��û�� Application ��ü�� �Ҹ��Ų��.
*/

class CancelApply {
public:
	void cancleApply(GeneralMember* curMem, string business_number, MemberDB& memDB);
};

#endif // !__CancelApply_H
