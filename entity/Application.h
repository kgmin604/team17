#ifndef __APPLICATION_H
#define __APPLICATION_H

#include <iostream>
#include <string>
using namespace std;

/*
Ŭ���� ����
ä�� ������ ���� ������ �����Ѵ�.
*/

class Application
{
private:
	string part_;
	string company_name_;
	int number_of_people_;
	int application_deadline_;
public:
	Application() {}
	Application(string part, string compyny_name, int number_of_people, int application_deadline);
	string getCompanyName();
	string getTaskType();
};

#endif