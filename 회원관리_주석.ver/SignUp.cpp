#include "SignUp.h"
#include <fstream>
using namespace std;
extern ofstream fout;

void SignUp::addNewMember(int type, string id, string password, string name, string number, MemberDB& memDB) {
	if (type == 1) { //CorporateMember(회사회원)
		CorporateMember* new_mem = new CorporateMember(type, id, password, name, number);
		memDB.addMember(new_mem);
	}
	else if (type == 2) { //GeneralMember(일반회원)
		GeneralMember* new_mem = new GeneralMember(type, id, password, name, number);
		memDB.addMember(new_mem);
	}
	fout << "1.1. 회원가입\n";
	fout << "> " << type << " " << name << " " << number << " " << id << " " << password << "\n";
	fout << "\n";
}