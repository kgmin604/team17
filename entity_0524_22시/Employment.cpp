#include "Employment.h"

Employment::Employment(string part, int number_of_people, string application_deadline) {
    part_ = part;
    number_of_people_ = number_of_people;
    application_deadline_ = application_deadline;
}

void Employment::getDetailEmployment(string& part, int& number_of_people, string& application_deadline) {
    part = part_;
    number_of_people = number_of_people_;
    application_deadline = application_deadline_;
}

void Employment::addApplication(Application* newApp) {
    app_collection.addApplication(newApp);
}