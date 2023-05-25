#ifndef __Apply_H
#define __Apply_H
#include <string>
#include "MemberDB.h"
class Apply {
public:
	void applyEmployment(GeneralMember* curMem, string businessNumber, MemberDB& memDB);
};

#endif