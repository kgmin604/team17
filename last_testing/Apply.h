#ifndef __Apply_H
#define __Apply_H
#include <string>
#include "MemberDB.h"

/*
    <<control>>

    - 클래스 이름: Apply
    - 클래스 설명: 
    사용자에게 사업자 번호를 받아와 이를 바탕으로 회사회원을 찾는다.
    찾은 회사회원에게 채용정보리스트를 받는다.
    해당 리스트에서 채용정보를 바탕으로 새로운 Application객체를 생성한다
    이후 Employment와 GeneralMember의 ApplicationCollection에 추가한다
    마지막으로 [ 회사이름 사업자번호 업무] 를 출력한다.
*/

class Apply {
public:
    // 현재 로그인된 멤버 객체, 사업자 번호, 멤버DB를 전달받아 
    // 사업자 번호에 맞는 회사 회원이 가장 최근에 올린 채용 공고에 지원한다.
	void applyEmployment(GeneralMember* cur_mem, string business_number, MemberDB& mem_db);
};

#endif
