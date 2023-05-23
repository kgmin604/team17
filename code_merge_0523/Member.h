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
	bool checkIdPw(string id, string pw); // 매개변수로 받은 id와 password가 Member객체와 일치한지 아닌지를 확인
	int getType(); // Member 객체의 회원 종류(type) 반환. 1이면 회사 회원. 2면 일반 회원.
	string getID(); // Member 객체의 id 반환.
	virtual string getName() = 0; // Member의 자식 객체의 이름 반환.
	virtual string number() = 0; // Member의 자식 객체의 number 반환.
};

#endif