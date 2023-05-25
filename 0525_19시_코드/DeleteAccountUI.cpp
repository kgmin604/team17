#include "DeleteAccountUI.h"

DeleteAccountUI::DeleteAccountUI(DeleteAccount* control) {
	DeleteAccount_control = control;
}
void DeleteAccountUI::deleteMember(Member*& curMem, MemberDB& memDB) {
	DeleteAccount_control->deteleMember(curMem, memDB);
}