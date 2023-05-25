#ifndef __Apply_H
#define __Apply_H

#include <iostream>
#include <string>
#include <vector>
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
#include "MemberDB.h"
using namespace std;

/*

    <<control>>

    - Ŭ���� �̸�: Apply
    - Ŭ���� ����:
    ����ڿ��� ����� ��ȣ�� �޾ƿ� �̸� �������� ȸ��ȸ���� ã�´�.
    ã�� ȸ��ȸ������ ä����������Ʈ�� �޴´�.
    �ش� ����Ʈ���� ä�������� �������� ���ο� Application��ü�� �����Ѵ�
    ���� Employment�� GeneralMember�� ApplicationCollection�� �߰��Ѵ�
    ��
    �������� [ ȸ���̸� ����ڹ�ȣ ����] �� ����Ѵ�.
*/
class Apply
{
private:
public:
    void applyEmployment(GeneralMember* curMem, string businessNumber, MemberDB& memDB);
};

#endif
