#include "Member.h"

Member::Member(int type, string id, string pw) {
	type_ = type;
	id_ = id;
	password_ = pw;
}
bool Member::checkIdPw(string id, string pw) {
	if (id_ == id && password_ == pw) return true;
	else return false;
}
int Member::getType() {
	return type_;
}
string Member::getID() {
	return id_;
}