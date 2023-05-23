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
public:
    EmploymentCollection();
    void addEmployment(const string& part, int number_of_people, const string& application_deadline) {
        Employment* new_employment = new Employment(part, number_of_people, application_deadline);
        emps_.push_back(new_employment);
    }
};


#endif // !__EmploymentCollecttion_H
