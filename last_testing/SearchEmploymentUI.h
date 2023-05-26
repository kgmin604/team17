#ifndef __SearchEmploymentUI_H
#define __SearchEmploymentUI_H

#include "SearchEmployment.h"
/*
    <<boundary>>
    - Ŭ���� �̸�: SearchEmploymentUI
    - Ŭ���� ����:
    ȸ�����Լ� ���� ȸ���̸��� ��Ʈ�� Ŭ�������� �Ѱ��ش�.
*/
class SearchEmploymentUI
{
    SearchEmployment* SearchEmployment_control;

public:
    SearchEmploymentUI(SearchEmployment* control);

    // ���� �α��� �� ��� ��ü, ����� ��ȣ, ��� DB�� ���޹޾� control ��ü�� Employment ����Ʈ ��ȸ ��û�� �Ѵ�.
    void SearchEmployments(GeneralMember* cur_mem, string corporation_name, MemberDB& mem_db);
};

#endif