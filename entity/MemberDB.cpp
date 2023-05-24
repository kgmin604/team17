#include "MemberDB.h"

MemberDB::MemberDB() {
	member_num_ = 0;
}

/*
회사이름(name), 사업자번호(number), 아이디(id), 비밀번호(pw)를 받아
Member 객체를 생성하고 member_list_에 추가한다.
*/
void MemberDB::addCorpoteMember(string name, string number, string id, string pw) {
	CoporateMember* new_mem = new CoporateMember(1, name, number, id, pw);
	member_list_.push_back(new_mem);
	member_num_++;
}

/*
새로운 회원이 가입했을 때
이름(name), 주민번호(number), 아이디(id), 비밀번호(pw)를 받아
Member 객체를 생성하고 member_list_에 추가한다.
*/
void MemberDB::addGeneralMember(string name, string number, string id, string pw) {
	GeneralMember* new_mem = new GeneralMember(2, name, number, id, pw);
	member_list_.push_back(new_mem);
	member_num_++;
}

/*
id를 매개변수로 받아 해당 id를 가진 Member를
member_list_에서 삭제하고, 객체를 소멸시킨다.
*/
void MemberDB::deleteMember(string id) {
	Member* del_mem;
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i]->getID() == id) {
			del_mem = member_list_[i];
			member_list_.erase(member_list_.begin() + i); // member_list_에서 삭제
			delete del_mem; // 객체 delete
			break;
		}
}

/*
아이디(id)와 비밀번호(pw)를 매개변수로 받아 해당 값을 attribute로 가진
Member 객체를 반환한다.
*/
Member* MemberDB::findMember(string id, string pw) {
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i]->checkIdPw(id, pw))
			return member_list_[i];
}

/*
회사 이름을 매개변수로 받아 해당 값을 attribute로 가진 CorporateMember를 반환한다.
*/
CoporateMember* MemberDB::findMember(string name) {
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i]->getType() == 1) // 회사 회원만 확인
			if (member_list_[i]->getName() == name)
				return (CoporateMember*)member_list_[i]; // 다운캐스팅하여 반환
}