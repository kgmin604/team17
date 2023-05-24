#include "Employment.h"

Employment::Employment(string part, int numberofpeople, string applicationdeadline)
    : part_(part), number_of_people_(numberofpeople), application_deadline_(applicationdeadline) {}

Employment* Employment::getEmployment() {
    return this;
}

string Employment::getTaskType() {
    return part_;
}
int Employment::getNumberOfPeople() {
    return number_of_people_;
}
string Employment::getDeadline() {
    return application_deadline_;
}