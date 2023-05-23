#include <string>
#include <iostream>
#include "GeneralMember.h"

GeneralMember::GeneralMember(int type, string id, string pw, string name, int registrationNumber) : Member(type, id, pw) {
    this->type = type;
    this->id = id;
    this->pw = pw;
    this->name = name;
    this->registrationNumber = registrationNumber;

}

void GeneralMember::deleteApplication() {
    collection.deleteApplication();
}


void GeneralMember::getApplication() {
    collection.getApplication();
}

/*
void GeneralMember::SearchEmployment(){
    hankook 3456 accounting 2 2023/05/26
    [ȸ���̸�] [����ڹ�ȣ] [����] [�ο� ��] [��û������] }
}
*/