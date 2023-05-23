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
	Member(int type, string id, string pw);
	bool checkIdPw(string id, string pw); // �Ű������� ���� id�� password�� Member��ü�� ��ġ���� �ƴ����� Ȯ��
	int getType(); // Member ��ü�� ȸ�� ����(type) ��ȯ. 1�̸� ȸ�� ȸ��. 2�� �Ϲ� ȸ��.
	string getID(); // Member ��ü�� id ��ȯ.
	virtual string getName() = 0; // Member�� �ڽ� ��ü�� �̸� ��ȯ.
	virtual string number() = 0; // Member�� �ڽ� ��ü�� number ��ȯ.
};

#endif