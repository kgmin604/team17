#ifndef __ApplyUI_H
#define __ApplyUI_H

#include "Apply.h"
/*

    <<boundary>>
    - Ŭ���� �̸�: ApplyUI
    - Ŭ���� ����:
    ȸ�����Լ� ���� ����� ��ȣ�� ��Ʈ�� Ŭ�������� �Ѱ��ش�.
*/
class ApplyUI {
    Apply* Apply_control;

public:
    ApplyUI(Apply* control);
    void applys(GeneralMember* curMem, string businessNumber, MemberDB& memDB);
};

#endif
