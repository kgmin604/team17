#include "LogOut.h"

#include <fstream>
using namespace std;
extern ofstream fout;

void LogOut::requestLogOut(Member*& cur_mem) {
	fout << "2.2. �α׾ƿ�\n";
	fout << "> " << cur_mem->getID() << "\n";
	fout << "\n";

	cur_mem = NULL;
}