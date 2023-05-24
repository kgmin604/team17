
#include <iostream>
#include <string>
#include "CorporateMember.h"

CorporateMember::CorporateMember(int type, string id, string pw, string CoporationName, string businessNumber) 
    : Member(type, id, pw) 
{
    this->coporationName = CoporationName;
    this->businessNumber = businessNumber;
}

Employment* CorporateMember::getEmploymentList() {
    emp_collection.getEmploymentList();
}

CorporateMember* CorporateMember::getCorporateMember() {
    return this;
}

void CorporateMember::addNewEmployment(Employment* newEmp) {
    emp_collection.addEmployment(newEmp);

}

string CorporateMember::getName() {
    return coporationName;
}

string CorporateMember::number() {
    return businessNumber;
}