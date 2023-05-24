#include "MemberDB.h"

MemberDB::MemberDB() {
	member_num_ = 0;
}

/*
ȸ���̸�(name), ����ڹ�ȣ(number), ���̵�(id), ��й�ȣ(pw)�� �޾�
Member ��ü�� �����ϰ� member_list_�� �߰��Ѵ�.
*/
void MemberDB::addCorpoteMember(string name, string number, string id, string pw) {
	CoporateMember* new_mem = new CoporateMember(1, name, number, id, pw);
	member_list_.push_back(new_mem);
	member_num_++;
}

/*
���ο� ȸ���� �������� ��
�̸�(name), �ֹι�ȣ(number), ���̵�(id), ��й�ȣ(pw)�� �޾�
Member ��ü�� �����ϰ� member_list_�� �߰��Ѵ�.
*/
void MemberDB::addGeneralMember(string name, string number, string id, string pw) {
	GeneralMember* new_mem = new GeneralMember(2, name, number, id, pw);
	member_list_.push_back(new_mem);
	member_num_++;
}

/*
id�� �Ű������� �޾� �ش� id�� ���� Member��
member_list_���� �����ϰ�, ��ü�� �Ҹ��Ų��.
*/
void MemberDB::deleteMember(string id) {
	Member* del_mem;
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i]->getID() == id) {
			del_mem = member_list_[i];
			member_list_.erase(member_list_.begin() + i); // member_list_���� ����
			delete del_mem; // ��ü delete
			break;
		}
}

/*
���̵�(id)�� ��й�ȣ(pw)�� �Ű������� �޾� �ش� ���� attribute�� ����
Member ��ü�� ��ȯ�Ѵ�.
*/
Member* MemberDB::findMember(string id, string pw) {
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i]->checkIdPw(id, pw))
			return member_list_[i];
}

/*
ȸ�� �̸��� �Ű������� �޾� �ش� ���� attribute�� ���� CorporateMember�� ��ȯ�Ѵ�.
*/
CoporateMember* MemberDB::findMember(string name) {
	for (int i = 0; i < member_num_; i++)
		if (member_list_[i]->getType() == 1) // ȸ�� ȸ���� Ȯ��
			if (member_list_[i]->getName() == name)
				return (CoporateMember*)member_list_[i]; // �ٿ�ĳ�����Ͽ� ��ȯ
}