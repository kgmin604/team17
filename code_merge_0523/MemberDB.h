#ifndef __MEMBERDB_H
#define __MEMBERDB_H

#include "Member.h"
#include <vector>

class MemberDB {
	vector<Member*> member_list_;
	int member_num_;
public:
	MemberDB();

	//ȸ���̸�(name), ����ڹ�ȣ(number), ���̵�(id), ��й�ȣ(pw)�� �޾� Member ��ü�� �����ϰ� member_list_�� �߰��Ѵ�.
	void addCorpoteMember(string name, string number, string id, string pw);

	// �̸�(name), �ֹι�ȣ(number), ���̵�(id), ��й�ȣ(pw)�� �޾� GeneralMember ��ü�� �����ϰ� member_list_�� �߰��Ѵ�.
	void addGeneralMember(string name, string number, string id, string pw);

	// id�� �Ű������� �޾� �ش� id�� ���� Member�� member_list_���� �����ϰ�, ��ü�� �Ҹ��Ų��.
	void deleteMember(string id);
	
	// ���̵�(id)�� ��й�ȣ(pw)�� �Ű������� �޾� �ش� ���� attribute�� ���� Member ��ü�� ��ȯ�Ѵ�.
	Member* findMember(string id, string pw);

	// ȸ�� �̸��� �Ű������� �޾� �ش� ���� attribute�� ���� CorporateMember�� ��ȯ�Ѵ�.
	CorporateMember* findMember(string name);
};
#endif 