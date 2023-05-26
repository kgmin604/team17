#include <string>
#include <iostream>
#include "GeneralMember.h"

GeneralMember::GeneralMember(int type, string id, string pw, string name, string registration_number) : Member(type, id, pw) {
    name_ = name;
    registration_number_ = registration_number;
}

vector<Application*>& GeneralMember::getApplicationList() {
    return app_collection_.getApplicationList();
}

void GeneralMember::addApplication(Application* new_app){
    app_collection_.addApplication(new_app);
}

void GeneralMember::deleteApplication(Application* del_app) {
    return app_collection_.deleteApplication(del_app);
}

string GeneralMember::getName() {
    return name_;
}
string GeneralMember::getNumber() {
    return registration_number_;
}