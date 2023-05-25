#ifndef __EmploymentCollecttion_H
#define __EmploymentCollecttion_H

#include "Employment.h"

/*
- Ŭ���� �̸�: EmploymentCollecttion
- Ŭ���� ����: ä�� ������ �����ϴ� Employment ��ü ����
*/

class EmploymentCollection {
private:
    vector<Employment*> emps_;
    int emp_num_;
public:
    EmploymentCollection();                             // ������. emp_num_�� 0���� �ʱ�ȭ
    void addEmployment(Employment* newEmp);             // ���ڷ� ���� Employment ��ü�� emps_�� �߰�
    Employment* deleteEmployment(Employment* delEmp);   // ���ڷ� ���� Employment ��ü�� emps_���� ���� �� �ش� ��ü ��ȯ
    vector<Employment*>& getEmploymentList();           // Employment* ����Ʈ(����) ��ȯ
};


#endif // !__EmploymentCollecttion_H
