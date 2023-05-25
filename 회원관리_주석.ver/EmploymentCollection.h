#ifndef __EmploymentCollecttion_H
#define __EmploymentCollecttion_H

#include "Employment.h"

/*
- 클래스 이름: EmploymentCollecttion
- 클래스 설명: 채용 정보를 관리하는 Employment 객체 관리
*/

class EmploymentCollection {
private:
    vector<Employment*> emps_;
    int emp_num_;
public:
    EmploymentCollection();                             // 생성자. emp_num_을 0으로 초기화
    void addEmployment(Employment* newEmp);             // 인자로 받은 Employment 객체를 emps_에 추가
    Employment* deleteEmployment(Employment* delEmp);   // 인자로 받은 Employment 객체를 emps_에서 제거 후 해당 객체 반환
    vector<Employment*>& getEmploymentList();           // Employment* 리스트(벡터) 반환
};


#endif // !__EmploymentCollecttion_H
