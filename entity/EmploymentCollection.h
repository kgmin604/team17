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
    int emp_num_;
public:
    EmploymentCollection();
    void addEmployment(Employment* newEmp);
    Employment* deleteEmployment(Employment* delEmp);
    vector<Employment*>& getEmploymentList();
};


#endif // !__EmploymentCollecttion_H
