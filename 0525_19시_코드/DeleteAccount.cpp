#include "DeleteAccount.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void DeleteAccount::deteleMember(Member*& curMem, MemberDB& memDB) {
	fout << "1.2. ȸ��Ż��\n";
	fout << "> " << curMem->getID() << "\n";
	fout << "\n";

	memDB.deleteMember(curMem);
	delete curMem;
	curMem = NULL;
}