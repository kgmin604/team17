#ifndef __SignUp_H
#define __SignUp_H

#include <string>
#include "MemberDB.h"

class SignUp {
public:
	void addNewMember(int type, string id, string password, string name, string number, MemberDB& memDB);
};

#endif