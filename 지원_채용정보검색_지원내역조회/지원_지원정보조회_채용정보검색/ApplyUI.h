#ifndef __ApplyUI_H
#define __ApplyUI_H

#include "Apply.h"
/*

    <<boundary>>
    - 클래스 이름: ApplyUI
    - 클래스 설명:
    회원에게서 받은 사업자 번호를 컨트롤 클래스에게 넘겨준다.
*/
class ApplyUI{
    Apply *Apply_control;

public:
    ApplyUI(Apply *control);
    void applys(GeneralMember *curMem, string businessNumber, MemberDB &memDB);
};

#endif
