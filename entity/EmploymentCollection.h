#ifndef __EmploymentCollecttion_H
#define __EmploymentCollecttion_H

#include "Employment.h"
/*
    Ŭ�����̸�:EmploymentCollecttion

    addEmployment�Լ��� ������ �� �޾ƿͼ� ���ο� Employment �����ϰ� �ٷ� ���Ϳ� �߰�
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
