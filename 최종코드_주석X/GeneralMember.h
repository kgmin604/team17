#ifndef GeneralMember_h
#define GeneralMember_h

#include <string>
#include <vector>
#include <iostream>
#include "Member.h"
#include "ApplicationCollection.h"
using namespace std;

/*
<<entity>>
- 클래스 이름: GeneralMember
- 클래스 설명: 일반회원을 관리한다.
*/

class GeneralMember : public Member {
private:
    string name;
    string registrationNumber;
    ApplicationCollection app_collection;

public:
    GeneralMember(int type, string id, string pw, string name, string registrationNumber);  
                                                            // 타입, 아이디, 비밀번호, 이름, 주민등록번호를 받아 GeneralMember 객체 생성
    vector<Application*>& getApplicationList();             // Application* 벡터(리스트) 참조 반환
    void addApplication(Application* newApp);               // 인자로 받은 Application 객체를 collection에 추가
    void deleteApplication(Application* delApp);            // 인자로 받은 Application 객체를 collection에서 삭제
    virtual string getName();                               // 회사 이름 반환
    virtual string getNumber();                             // 주민등록번호 반환
};

#endif /* GeneralMember_hpp */
