#include "Member.h"

Member::Member(int type, string id, string pw) {
	this->type = type;
	this->id = id;
	this->pw = pw;
}
bool Member::checkIdPw(string id, string pw) {
	if (this->id == id && this->pw == pw) return true;
	else false;
}
int Member::getType() {
	return type;
}
string Member::getID() {
	return id;
}