/*
* <<boundary>>
- 클래스 이름: ShowMyEmploymentsUI
- 클래스 설명: 회사 회원으로부터 채용 정보 조회 요청이 들어오면 해당 회사 회원의 정보를 ShowMyEmployments<<control>>에 전달한다.
*/

#ifndef ShowMyEmploymentsUI_h
#define ShowMyEmploymentsUI_h


#include "ShowMyEmployments.h"



class ShowMyEmploymentsUI
{
private:
    ShowMyEmployments* ShowMyEmployments_control;
public:
    ShowMyEmploymentsUI(ShowMyEmployments* control);
    void showMyEmployments(CorporateMember* curMem);
};
#endif /* ShowMyEmploymentsUI_hpp */

