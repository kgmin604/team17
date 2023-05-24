#include <string>
#include <iostream>
#include "GeneralMember.h"

GeneralMember::GeneralMember(int type, string id, string pw, string name, string registrationNumber) : Member(type, id, pw) {
    this->name = name;
    this->registrationNumber = registrationNumber;
}

void GeneralMember::addNewApplication(string part, string company_name, int number_of_people, int application_deadline){
    Application* newApp = new Application(part, company_name, number_of_people, application_deadline);
    collection.addApplication(newApp);
}

vector<Application*>& GeneralMember::getApplicationList() {
    return collection.getApplicationList();
}
string GeneralMember::getName() {
    return name;
}
string GeneralMember::number() {
    return registrationNumber;
}