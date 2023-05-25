#ifndef __LogIn_H
#define __LogIn_H

#include "MemberDB.h"
#include <string.h>

class LogIn {
public:
	void findMember(Member*& curMem, string id, string password, MemberDB& memDB);
};


#endif // !__LogIn_H