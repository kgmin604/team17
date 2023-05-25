#ifndef __APPLICATION_H
#define __APPLICATION_H

#include <iostream>
#include <string>
using namespace std;

/*
Application Ŭ����
ä�� ������ ���� ������ �����Ѵ�.
*/

class Application
{
private:
	string part_;
	string company_name_;
	string business_number_;
	int number_of_people_;
	string application_deadline_;
public:
	Application() {}
	Application(string part, string compyny_name, string business_number, int number_of_people, string application_deadline);
	
	// Application�� ����, ȸ�� �̸�, ����� ��ȣ, �ο�, ��û������ ������ �޾ƿ´�.
	void getDetailApplication(string& part, string& compyny_name, string& business_number, int& number_of_people, string& application_deadline);

	// Application ��ü�� ��ȯ�Ѵ�.
	Application* getApplication();
};

#endif