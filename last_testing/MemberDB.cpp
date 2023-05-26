#include "MemberDB.h"

MemberDB::MemberDB() {
	member_num_ = 0;
}


void MemberDB::addMember(Member* new_mem) {
	member_list_.push_back(new_mem);
	member_num_++;
}

void MemberDB::deleteMember(Member* del_mem) {
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i] == del_mem) {
			member_list_.erase(member_list_.begin() + i);	// member_list_에서 삭제
			member_num_--;
		}
}

vector<Member*>& MemberDB::getMemberList() {
	return member_list_;
}