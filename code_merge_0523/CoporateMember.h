#ifndef __COPORATEMEMBER_H
#define __COPORATEMEMBER_H

#include "Member.h"
using namespace std;

class CoporateMember : public Member {
private:
    int type;
    string id;
    string pw;
    string coporationName;
    int businessNumber;
    EmploymentCollection collection;

public:
    CoporateMember(int type, string id, string pw, string CoporationName, int businessNumber);
    void getEmploymentList();
    CoporateMember* getCorporateMember();
    void addNewEmployment(string part, string NumberofPeople, int applicationDeadline);
    string getName();
};

#endif // !__COPORATEMEMBER_H
