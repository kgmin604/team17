#include <string>
#include <iostream>
#include "GeneralMember.h"

GeneralMember::GeneralMember(int type, string id, string pw, string name, string registrationNumber) : Member(type, id, pw) {
    this->name = name;
    this->registrationNumber = registrationNumber;
}

vector<Application*>& GeneralMember::getApplicationList() {
    return app_collection.getApplicationList();
}

void GeneralMember::addApplication(Application* newApp){
    app_collection.addApplication(newApp);
}

void GeneralMember::deleteApplication(Application* delApp) {
    return app_collection.deleteApplication(delApp);
}

string GeneralMember::getName() {
    return name;
}
string GeneralMember::getNumber() {
    return registrationNumber;
}