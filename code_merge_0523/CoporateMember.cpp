
#include <iostream>
#include <string>
#include "CoporateMember.h"

CoporateMember::CoporateMember(int type, string id, string pw, string CoporationName, int businessNumber) 
    : Member(type, id, pw) { //회사 회원 생성.  member에서 type, id, pw 받아온 후 추가로 CoporationName,businessNumber 저장
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
    //매개변수 "%s %d %s", part, NumberofPeople, applicationDeadline);

    collection.addNewEmployment(part, NumberofPeople, applicationDeadline);


}