#ifndef __APPLICATION_H
#define __APPLICATION_H

#include <iostream>
#include <string>
using namespace std;

/*
클래스 설명
채용 지원에 대한 내용을 관리한다.
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