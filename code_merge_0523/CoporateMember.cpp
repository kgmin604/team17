
#include <iostream>
#include <string>
#include "CoporateMember.h"

CoporateMember::CoporateMember(int type, string id, string pw, string CoporationName, int businessNumber) 
    : Member(type, id, pw) { //ȸ�� ȸ�� ����.  member���� type, id, pw �޾ƿ� �� �߰��� CoporationName,businessNumber ����
    this->type = type;
    this->id = id;
    this->pw = pw;
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

void CoporateMember::addNewEmployment(string part, string NumberofPeople, int applicationDeadline) {
    //�Ű����� "%s %d %s", part, NumberofPeople, applicationDeadline);

    collection.addNewEmployment(part, NumberofPeople, applicationDeadline);


}