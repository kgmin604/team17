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
    void searchEmployments(GeneralMember* curMem, string coporationName, MemberDB& memDB);
};

#endif
