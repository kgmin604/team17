#ifndef __APPLICATION_H
#define __APPLICATION_H

#include <iostream>
using namespace std;

/*
클래스 설명
채용 지원에 대한 내용을 관리한다.
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

#endif