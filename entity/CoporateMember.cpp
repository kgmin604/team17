
#include <iostream>
#include <string>
#include "CoporateMember.h"

CoporateMember::CoporateMember(int type, string id, string pw, string CoporationName, string businessNumber) 
    : Member(type, id, pw) { //ȸ�� ȸ�� ����.  member���� type, id, pw �޾ƿ� �� �߰��� CoporationName,businessNumber ����
    this->coporationName = CoporationName;
    this->businessNumber = businessNumber;
}

void CoporateMember::getEmploymentList() {
    collection.getEmploymentList();
}

CoporateMember* CoporateMember::getCorporateMember() {
    cout << coporationName << businessNumber;
    return this;
}

void CoporateMember::addNewEmployment(string part, int NumberofPeople, string applicationDeadline) {
    //�Ű����� "%s %d %s", part, NumberofPeople, applicationDeadline);
    Employment* newEmp = new Employment(part, NumberofPeople, applicationDeadline);
    collection.addEmployment(newEmp);

}

string CoporateMember::getName() {
    return coporationName;
}

string CoporateMember::number() {
    return businessNumber;
}