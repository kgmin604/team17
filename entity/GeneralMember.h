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
    ApplicationCollection collection;

public:
    GeneralMember(int type, string id, string pw, string name, string registrationNumber);
    void addNewApplication(string part, string companyName, int NumberofPeople, int applicationDeadline);
    vector<Application*>& getApplicationList();
    virtual string getName();
    virtual string number();
};

#endif /* GeneralMember_hpp */