
#include <iostream>
#include <string>
#include "CoporateMember.h"

CoporateMember::CoporateMember(int type, string id, string pw, string CoporationName, string businessNumber) 
    : Member(type, id, pw) { //회사 회원 생성.  member에서 type, id, pw 받아온 후 추가로 CoporationName,businessNumber 저장
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
    //매개변수 "%s %d %s", part, NumberofPeople, applicationDeadline);
    Employment* newEmp = new Employment(part, NumberofPeople, applicationDeadline);
    collection.addEmployment(newEmp);

}

string CoporateMember::getName() {
    return coporationName;
}

string CoporateMember::number() {
    return businessNumber;
}