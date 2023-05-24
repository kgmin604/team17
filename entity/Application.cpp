#include <iostream>
#include <fstream>
#include "Application.h"
using namespace std;

extern ofstream fout;

Application::Application(string part, string compyny_name, int number_of_people, int application_deadline) {
	part_=part;
	company_name_=compyny_name;
	number_of_people_= number_of_people;
	application_deadline_= application_deadline;
}

string Application::getCompanyName() {
	return company_name_;
}

string Application::getTaskType() {
	return part_;
}