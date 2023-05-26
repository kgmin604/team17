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
    // ���� �α��� �� ��� ��ü, ����� ��ȣ, ���DB�� �޾ƿ� ����� ��ȣ�� ���� ȸ�� ȸ���� ä�� ���� ����Ʈ�� ����Ѵ�.
    void showEmploymentList(GeneralMember* cur_mem, string corporation_name, MemberDB& mem_db);
};

#endif