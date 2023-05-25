#ifndef __ShowApplicationUI_H
#define __ShowApplicationUI_H

#include "ShowApplication.h"
/*
    <<boundary>>

    - 클래스 이름: ShowApplicationUI
    - 클래스 설명:
    사용자에게 지원정보 조회 요청을 받은후 요청을 control클래스에 넘겨준다.

*/
class ShowApplicationUI
{
    ShowApplication* ShowApplication_control;

public:
    ShowApplicationUI(ShowApplication* control);
    void requestShowApplication(GeneralMember* curMem);
};

#endif
