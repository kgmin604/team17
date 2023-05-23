#ifndef __MEMBERDB_H
#define __MEMBERDB_H

#include "Member.h"
#include <vector>

class MemberDB {
	vector<Member*> member_list_;
	int member_num_;
public:
	MemberDB();

	//회사이름(name), 사업자번호(number), 아이디(id), 비밀번호(pw)를 받아 Member 객체를 생성하고 member_list_에 추가한다.
	void addCorpoteMember(string name, string number, string id, string pw);

	// 이름(name), 주민번호(number), 아이디(id), 비밀번호(pw)를 받아 GeneralMember 객체를 생성하고 member_list_에 추가한다.
	void addGeneralMember(string name, string number, string id, string pw);

	// id를 매개변수로 받아 해당 id를 가진 Member를 member_list_에서 삭제하고, 객체를 소멸시킨다.
	void deleteMember(string id);
	
	// 아이디(id)와 비밀번호(pw)를 매개변수로 받아 해당 값을 attribute로 가진 Member 객체를 반환한다.
	Member* findMember(string id, string pw);

	// 회사 이름을 매개변수로 받아 해당 값을 attribute로 가진 CorporateMember를 반환한다.
	CorporateMember* findMember(string name);
};
#endif 