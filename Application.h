#pragma once
#include <iostream>

using namespace std;

/*
Ŭ���� ����
ä�� ������ ���� ������ �����Ѵ�.

*/
class Application
{
private:
	string part;
	string companyName;
	int NumberofPeople;
	int applicationDeadline;
public:
	string getTaskType();
	void getApplication();
	virtual int getBnum();

};

