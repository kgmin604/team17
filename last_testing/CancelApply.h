#ifndef __CancelApply_H
#define __CancelApply_H

#include <string>
#include "GeneralMember.h"
#include "MemberDB.h"

/*
<<control>>
- 클래스 이름: CancelApply
- 클래스 설명
* 현재 회원 정보, 지원을 취소하고자 하는 기업의 사업자 번호, 회원 목록을 매개변수로 받아
* 사업자 번호를 통해 삭제가 요청된 Application 객체, 해당 객체가 속한 Employment를 찾아
* cur_mem의 지원 리스트에서 제외하고
* Employment의 지원 리스트에서 제외하고
* 삭제가 요청된 Application 객체를 소멸시킨다.
*/

class CancelApply {
public:
	// 현재 로그인된 멤버 객체, 사업자 번호, 멤버DB를 전달받아 지원을 취소한다.
	void cancelApply(GeneralMember* cur_mem, string business_number, MemberDB& mem_db);
};

#endif // !__CancelApply_H
