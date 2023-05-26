#include "SignUp.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void SignUp::addNewMember(int type, string id, string password, string name, string number, MemberDB& mem_db) {
	if (type == 1) {
		CorporateMember* new_mem = new CorporateMember(type, id, password, name, number);
		mem_db.addMember(new_mem);
	}
	else if (type == 2) {
		GeneralMember* new_mem = new GeneralMember(type, id, password, name, number);
		mem_db.addMember(new_mem);
	}
	
	fout << "1.1. ȸ������\n";
	fout << "> " << type << " " << name << " " << number << " " << id << " " << password << "\n";
	fout << "\n";
}