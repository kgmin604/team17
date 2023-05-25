#include "LogOut.h"

#include <fstream>
using namespace std;
extern ofstream fout;

void LogOut::requestLogOut(Member* curMem) {
	fout << "2.2. ·Î±×¾Æ¿ô\n";
	fout << "> " << curMem->getID() << "\n";
	fout << "\n";

	//curMem = NULL;
}