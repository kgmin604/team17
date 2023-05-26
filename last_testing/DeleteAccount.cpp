#include "DeleteAccount.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void DeleteAccount::deteleMember(Member*& cur_mem, MemberDB& mem_db) {
	
	fout << "1.2. È¸¿øÅ»Åð\n";
	fout << "> " << cur_mem->getID() << "\n";
	fout << "\n";

	mem_db.deleteMember(cur_mem);
	delete cur_mem;
	cur_mem = NULL;
}