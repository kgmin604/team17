#ifndef __COPORATEMEMBER_H
#define __COPORATEMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"
using namespace std;

class CoporateMember : public Member {
private:
    string coporationName;
    string businessNumber;
    EmploymentCollection collection;

public:
    CoporateMember(int type, string id, string pw, string CoporationName, string businessNumber);
    void getEmploymentList();
    CoporateMember* getCorporateMember();
    void addNewEmployment(string part, int NumberofPeople, string applicationDeadline);
    virtual string getName();
    virtual string number();
};

#endif // !__COPORATEMEMBER_H
