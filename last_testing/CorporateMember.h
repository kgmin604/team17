#ifndef __CorporateMEMBER_H
#define __CorporateMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"
using namespace std;

/*
<<entity>>
- 클래스 이름: CorporateMember
- 클래스 설명: 회사회원을 관리한다.
*/

class CorporateMember : public Member {
private:
    string coporation_name_;
    string business_number_;
    EmploymentCollection emp_collection_;

public:
    CorporateMember(int type, string id, string pw, string coporation_name, string business_number);  
                                                    // 타입, 아이디, 비밀번호, 회이름, 사업자번호를 받아
                                                    // CorporateMember 객체 생성
    vector< Employment*>& getEmploymentList();            // Employment* 벡터(리스트) 참조 반환
    CorporateMember* getCorporateMember();      // CorporateMember(자기자신) 반환
    void addNewEmployment(Employment* new_emp);  // 인자로 받은 Employment 객체를 collection에 추가
    virtual string getName();                   // 이름 반환
    virtual string getNumber();                 // 사업자 번호 반환
};

#endif // !__CorporateMEMBER_H
