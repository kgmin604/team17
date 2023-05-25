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
	string application_deadline_;
public:
	Application() {}
	Application(string part, string compyny_name, string business_number, int number_of_people, string application_deadline);
	
	// Application의 업무, 회사 이름, 사업자 번호, 인원, 신청마감일 정보를 받아온다.
	void getDetailApplication(string& part, string& compyny_name, string& business_number, int& number_of_people, string& application_deadline);

	// Application 객체를 반환한다.
	Application* getApplication();
};

#endif