#ifndef __SearchEmploymentUI_H
#define __SearchEmploymentUI_H

#include "SearchEmployment.h"
/*

    <<boundary>>
    - 클래스 이름: SearchEmploymentUI
    - 클래스 설명:
    회원에게서 받은 회사이름을 컨트롤 클래스에게 넘겨준다.
*/
class SearchEmploymentUI
{
    SearchEmployment *SearchEmployment_control;

public:
    SearchEmploymentUI(SearchEmployment *control);
    void SearchEmployments(GeneralMember *curMem, string coporationName, MemberDB &memDB);
};

#endif
