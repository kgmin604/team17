#ifndef GeneralMember_h
#define GeneralMember_h

#include <string>
#include <vector>
#include <iostream>
#include "Member.h"
#include "ApplicationCollection.h"
using namespace std;

class GeneralMember : public Member {
private:
    string name;
    string registrationNumber;
    ApplicationCollection app_collection;

public:
    GeneralMember(int type, string id, string pw, string name, string registrationNumber);  
                                                            // Ÿ��, ���̵�, ��й�ȣ, �̸�, �ֹε�Ϲ�ȣ�� �޾� GeneralMember ��ü ����
    vector<Application*>& getApplicationList();             // Application* ����(����Ʈ) ���� ��ȯ
    void addApplication(Application* newApp);               // ���ڷ� ���� Application ��ü�� collection�� �߰�
    void deleteApplication(Application* delApp);            // ���ڷ� ���� Application ��ü�� collection���� ����
    virtual string getName();                               // ȸ�� �̸� ��ȯ
    virtual string getNumber();                             // �ֹε�Ϲ�ȣ ��ȯ
};

#endif /* GeneralMember_hpp */