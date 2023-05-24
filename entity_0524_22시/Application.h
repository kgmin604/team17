#ifndef __APPLICATION_H
#define __APPLICATION_H

#include <iostream>
#include <string>
using namespace std;

/*
Application 클래스
채용 지원에 대한 내용을 관리한다.
*/

class Application
{
private:
	string part_;
	string company_name_;
	string business_number_;
	int number_of_people_;
	int application_deadline_;
public:
	Application(string part, string compyny_name, string business_number, int number_of_people, int application_deadline);
	
	void getDetailApplication(string& part, string& compyny_name, string& business_number, int& number_of_people, int& application_deadline);
	Application* getApplication();
};

#endif