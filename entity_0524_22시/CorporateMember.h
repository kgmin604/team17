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
                                                    // Ÿ��, ���̵�, ��й�ȣ, ȸ�̸�, ����ڹ�ȣ�� �޾�
                                                    // CorporateMember ��ü ����
    Employment* getEmploymentList();            // Employment* ����(����Ʈ) ���� ��ȯ
    CorporateMember* getCorporateMember();      // CorporateMember(�ڱ��ڽ�) ��ȯ
    void addNewEmployment(Employment* newEmp);  // ���ڷ� ���� Employment ��ü�� collection�� �߰�
    virtual string getName();                   // �̸� ��ȯ
    virtual string number();                    // ����� ��ȣ ��ȯ
};

#endif // !__CorporateMEMBER_H
