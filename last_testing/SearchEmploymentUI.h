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
    SearchEmployment* SearchEmployment_control;

public:
    SearchEmploymentUI(SearchEmployment* control);

    // 현재 로그인 된 멤버 객체, 사업자 번호, 멤버 DB를 전달받아 control 객체에 Employment 리스트 조회 요청을 한다.
    void SearchEmployments(GeneralMember* cur_mem, string corporation_name, MemberDB& mem_db);
};

#endif