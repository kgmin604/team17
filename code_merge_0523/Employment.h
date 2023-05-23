#ifndef __Employment_H
#define __Employment_H

#include <iostream>
#include <string>
#include <vector>
#include "Application.h"
using namespace std;

class Employment {
private:
    string part_;
    int number_of_people_;
    string application_deadline_;
    vector<Application*> apps_;
public:
    Employment(string part, int numberofpeople, string applicationdeadline)
        : part_(part), number_of_people_(numberofpeople), application_deadline_(applicationdeadline) {}

    void get_detail_employment() {};
    void add_application(Application* newapplication);
    void get_task_type(vector<Application*> app, string& part);
};

#endif