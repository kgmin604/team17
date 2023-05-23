#ifndef __EmploymentCollecttion_H
#define __EmploymentCollecttion_H

#include "Employment.h"
/*
    클래스이름:EmploymentCollecttion

    addEmployment함수로 세가지 값 받아와서 새로운 Employment 생성하고 바로 벡터에 추가
*/
class EmploymentCollection {
private:
    vector<Employment*> emps_;
public:
    EmploymentCollection();
    void addEmployment(const string& part, int number_of_people, const string& application_deadline) {
        Employment* new_employment = new Employment(part, number_of_people, application_deadline);
        emps_.push_back(new_employment);
    }
};


#endif // !__EmploymentCollecttion_H
