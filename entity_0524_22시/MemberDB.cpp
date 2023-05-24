#include "MemberDB.h"

MemberDB::MemberDB() {
	member_num_ = 0;
}


void MemberDB::addMember(Member* newMem) {
	member_list_.push_back(newMem);
	member_num_++;
}

Member* MemberDB::deleteMember(Member* delMem) {
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i] == delMem) {
			member_list_.erase(member_list_.begin() + i);	// member_list_에서 삭제
			member_num_--;
			return delMem;									// del_mem 반환
		}
}

vector<Member*>& MemberDB::getMemberList() {
	return member_list_;
}