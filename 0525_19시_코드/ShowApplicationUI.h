#ifndef __ShowApplicationUI_H
#define __ShowApplicationUI_H

#include "ShowApplication.h"
/*
    <<boundary>>

    - Ŭ���� �̸�: ShowApplicationUI
    - Ŭ���� ����:
    ����ڿ��� �������� ��ȸ ��û�� ������ ��û�� controlŬ������ �Ѱ��ش�.

*/
class ShowApplicationUI
{
    ShowApplication* ShowApplication_control;

public:
    ShowApplicationUI(ShowApplication* control);
    void requestShowApplication(GeneralMember* curMem);
};

#endif
