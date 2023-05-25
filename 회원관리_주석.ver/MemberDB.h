#ifndef __MEMBERDB_H
#define __MEMBERDB_H

#include "Member.h"
#include "CorporateMember.h"
#include "GeneralMember.h"
#include <vector>

/*
- 클래스 이름: MemberDB
- 클래스 설명: 멤버 정보를 저장하고 관리한다. 
*/

class MemberDB {
	vector<Member*> member_list_;
	int member_num_;
public:
	MemberDB();								//생성자. member_num_를 0으로 초기화.

	void addMember(Member* newMem);			//인자로 받은 Member 객체를 member_list_에 추가
	Member* deleteMember(Member* delMem);	//인자로 받은 Member 객체를 member_list_에서 제거 후 해당 객체 반환
	vector<Member*>& getMemberList();		// member_list_ 반환
	
};
#endif 