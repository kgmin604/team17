#include "LogOut.h"

#include <fstream>
using namespace std;
extern ofstream fout;

void LogOut::requestLogOut(Member* curMem) {
	fout << "2.2. �α׾ƿ�\n";
	fout << "> " << curMem->getID() << "\n";
	fout << "\n";

	//curMem = NULL;
}