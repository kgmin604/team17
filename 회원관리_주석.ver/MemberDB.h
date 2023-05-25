#ifndef __MEMBERDB_H
#define __MEMBERDB_H

#include "Member.h"
#include "CorporateMember.h"
#include "GeneralMember.h"
#include <vector>

/*
- Ŭ���� �̸�: MemberDB
- Ŭ���� ����: ��� ������ �����ϰ� �����Ѵ�. 
*/

class MemberDB {
	vector<Member*> member_list_;
	int member_num_;
public:
	MemberDB();								//������. member_num_�� 0���� �ʱ�ȭ.

	void addMember(Member* newMem);			//���ڷ� ���� Member ��ü�� member_list_�� �߰�
	Member* deleteMember(Member* delMem);	//���ڷ� ���� Member ��ü�� member_list_���� ���� �� �ش� ��ü ��ȯ
	vector<Member*>& getMemberList();		// member_list_ ��ȯ
	
};
#endif 