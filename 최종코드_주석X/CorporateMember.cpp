
#include <iostream>
#include <string>
#include "CorporateMember.h"

CorporateMember::CorporateMember(int type, string id, string pw, string CoporationName, string businessNumber) 
    : Member(type, id, pw) 
{
    this->coporationName = CoporationName;
    this->businessNumber = businessNumber;
}

vector< Employment*>& CorporateMember::getEmploymentList() {
    return emp_collection.getEmploymentList();
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

string CorporateMember::getNumber() {
    return businessNumber;
}