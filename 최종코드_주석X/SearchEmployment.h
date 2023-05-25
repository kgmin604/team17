#ifndef __SearchEmployment_H
#define __SearchEmployment_H

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
    - Ŭ���� �̸�: SearchEmployment
    - Ŭ���� ����:
    ����ڿ��� ȸ���̸��� �޾ƿ� �̸� �������� ȸ��ȸ���� ã�´�.
    ã�� ȸ��ȸ������ ä����������Ʈ�� �޴´�.
    ä����������Ʈ�� �� ä���������� ȸ���̸� ����ڹ�ȣ ���� �ο� ��û ������ ������ �޾ƿ�
    ���Ͽ� ����Ѵ�.
*/
class SearchEmployment
{
private:
public:
    void showEmploymentList(GeneralMember* curMem, string corporationName, MemberDB& memDB);
};

#endif