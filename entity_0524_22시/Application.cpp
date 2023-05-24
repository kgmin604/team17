#include <iostream>
#include <fstream>
#include "Application.h"
using namespace std;

Application::Application(string part, string company_name, string business_number, int number_of_people, int application_deadline) {
	part_ = part;
	company_name_ = company_name;
	business_number_ = business_number;
	number_of_people_ = number_of_people;
	application_deadline_ = application_deadline;
}

void Application::getDetailApplication(string& part, string& company_name, string& business_number, int& number_of_people, int& application_deadline) {
	part = part_;
	company_name = company_name_;
	business_number = business_number_;
	number_of_people = number_of_people_;
	application_deadline = application_deadline_;
}

Application* Application::getApplication() {
	return this;
}