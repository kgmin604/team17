#ifndef __CorporateMEMBER_H
#define __CorporateMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"
using namespace std;

class CorporateMember : public Member {
private:
    string coporationName;
    string businessNumber;
    EmploymentCollection emp_collection;

public:
    CorporateMember(int type, string id, string pw, string CoporationName, string businessNumber);  
                                                    // 타입, 아이디, 비밀번호, 회이름, 사업자번호를 받아
                                                    // CorporateMember 객체 생성
    Employment* getEmploymentList();            // Employment* 벡터(리스트) 참조 반환
    CorporateMember* getCorporateMember();      // CorporateMember(자기자신) 반환
    void addNewEmployment(Employment* newEmp);  // 인자로 받은 Employment 객체를 collection에 추가
    virtual string getName();                   // 이름 반환
    virtual string number();                    // 사업자 번호 반환
};

#endif // !__CorporateMEMBER_H
