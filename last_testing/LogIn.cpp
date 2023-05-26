#include "LogIn.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void LogIn::findMember(Member*& cur_mem, string id, string password, MemberDB& mem_db) {
	vector<Member*>& mem_list = mem_db.getMemberList();
	for (int i = 0; i < mem_list.size(); i++) {
		if (mem_list[i]->checkIdPw(id, password)) {
			cur_mem = mem_list[i];
			break;
		}
	}
	fout << "2.1. ·Î±×ÀÎ\n";
	fout << "> " << id << " " << password << "\n";
	fout << "\n";
}