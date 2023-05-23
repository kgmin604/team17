#ifndef GeneralMember_h
#define GeneralMember_h

#include <string>
#include <vector>
#include <iostream>
#include "Member.h"
#include "Application.h"
using namespace std;

class GeneralMember : public Member {
private:
    int type;
    string id;
    string pw;
    string name;
    int registrationNumber;
    ApplicationCollection collection;

public:
    GeneralMember(int type, string id, string pw, string name, int registrationNumber);
    void deleteApplication();
    void getApplication();
    void SearchEmployment();

};




#endif /* GeneralMember_hpp */