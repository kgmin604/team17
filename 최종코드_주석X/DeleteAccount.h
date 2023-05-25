#ifndef __DeleteAccount_H
#define __DeleteAccount_H

#include "MemberDB.h"

class DeleteAccount {
public:
	void deteleMember(Member*& curMem, MemberDB& memDB);
};

#endif