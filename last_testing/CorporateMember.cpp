
#include <iostream>
#include <string>
#include "CorporateMember.h"

CorporateMember::CorporateMember(int type, string id, string pw, string coporation_name, string business_number) 
    : Member(type, id, pw) 
{
    this->coporation_name_ = coporation_name;
    this->business_number_ = business_number;
}

vector< Employment*>& CorporateMember::getEmploymentList() {
    return emp_collection_.getEmploymentList();
}

CorporateMember* CorporateMember::getCorporateMember() {
    return this;
}

void CorporateMember::addNewEmployment(Employment* new_emp) {
    emp_collection_.addEmployment(new_emp);

}

string CorporateMember::getName() {
    return coporation_name_;
}

string CorporateMember::getNumber() {
    return business_number_;
}