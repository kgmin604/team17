#ifndef __MEMBER_H
#define __MEMBER_H

#include <string>
using namespace std;

class Member {
protected:
	int type;
	string id;
	string pw;
public:
	Member(int type, string id, string pw);	// ������. ȸ�� ����, ���̵�, ��й�ȣ�� ���ڷ� �޾� ��� ��ü ����
	bool checkIdPw(string id, string pw);	// �Ű������� ���� id�� password�� Member��ü�� ��ġ���� �ƴ����� Ȯ���Ͽ� true/false ��ȯ
	int getType();							// Member ��ü�� ȸ�� ����(type) ��ȯ. 1�̸� ȸ�� ȸ��. 2�� �Ϲ� ȸ��.
	string getID();							// Member ��ü�� id ��ȯ.
	virtual string getName() = 0;			// Member�� �ڽ� ��ü�� name(name �Ǵ� coporationName) ��ȯ.
	virtual string getNumber() = 0;			// Member�� �ڽ� ��ü�� number(registrationNumber �Ǵ� businessNumber) ��ȯ.
};

#endif