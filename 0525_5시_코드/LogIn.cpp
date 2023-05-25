#include "LogIn.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void LogIn::findMember(Member*& curMem, string id, string password, MemberDB& memDB) {
	vector<Member*>& mem_list = memDB.getMemberList();
	for (int i = 0; i < mem_list.size(); i++) {
		if (mem_list[i]->checkIdPw(id, password)) {
			curMem = mem_list[i];
			break;
		}
	}
	fout << "2.1. ·Î±×ÀÎ\n";
	fout << "> " << id << " " << password << "\n";
	fout << "\n";
}