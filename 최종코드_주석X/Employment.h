#ifndef __Employment_H
#define __Employment_H

#include <iostream>
#include <string>
#include <vector>
#include "ApplicationCollection.h"
using namespace std;

/*
* Employment Ŭ����
* ����ڰ� ����� ä�� ������ �����Ѵ�.
*/

class Employment {
private:
    string part_;
    int number_of_people_;
    string application_deadline_;
    ApplicationCollection app_collection;
public:
    Employment(string part, int number_of_people, string application_deadline);                     // ������. ����, �ο� ��, ��û �����ϸ� ���ڷ� �޾� ����.
    void getDetailEmployment(string& part, int& number_of_people, string& application_deadline);    // Employment�� attribute�� ������ ���� ���ڿ� ����
    void addApplication(Application* newApp);                                                       // ���ڷ� ���� newApp�� app_collection�� �߰�
    void deleteApplication(Application* delApp);                                                    // ���ڷ� ���� newApp�� app_collection�� �߰�
    int getNumberOfApps();
};

#endif