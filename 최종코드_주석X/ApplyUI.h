#ifndef __ApplyUI_H
#define __ApplyUI_H
#include "Apply.h"
class ApplyUI{
	Apply* Apply_control;
public:
	ApplyUI(Apply* control);
	void apply(GeneralMember* curMem, string businessNumber, MemberDB& memDB);
};

#endif