#include "DeleteAccountUI.h"

DeleteAccountUI::DeleteAccountUI(DeleteAccount* control) {
	DeleteAccount_control = control;
}
void DeleteAccountUI::deleteMember(Member*& cur_mem, MemberDB& mem_db) {
	DeleteAccount_control->deteleMember(cur_mem, mem_db);
}