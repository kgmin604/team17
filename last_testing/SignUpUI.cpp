#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUp* control) {
	SignUp_control = control;
}

void SignUpUI::requestSignUp(int type, string id, string password, string name, string number, MemberDB& mem_db) {
	SignUp_control->addNewMember(type, id, password, name, number, mem_db);
}