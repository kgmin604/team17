#ifndef __Employment_H
#define __Employment_H

#include <iostream>
#include <string>
#include <vector>
#include "ApplicationCollection.h"
using namespace std;

class Employment {
private:
    string part_;
    int number_of_people_;
    string application_deadline_;
    ApplicationCollection app_collection;
public:
    Employment(string part, int number_of_people, string application_deadline);                     // 생성자. 업무, 인원 수, 신청 마감일를 인자로 받아 생성.
    void getDetailEmployment(string& part, int& number_of_people, string& application_deadline);    // Employment의 attribute를 참조로 받은 인자에 저장
    void addApplication(Application* newApp);                                                       // 인자로 받은 newApp을 app_collection에 추가
};

#endif