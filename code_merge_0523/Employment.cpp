#include "Employment.h"

/*
control�� ä����������Ʈ ��û�ϸ� ä������Ŭ������ ���� ����Ѵ�
*/
void Employment::get_detail_employment() {
    cout << part_ << number_of_people << application_deadline_;

};

/*������ �޾ƿͼ� ��Ʈ�� Ŭ������ �ش� -���� ��Ʈ��Ŭ�������� �ش� ������ ���� ���������� ���ø����̼ǿ��� �޾ƿ´�*/
void Employment::get_task_type(vector<Application*> app, string& part) {
    //�ΰ��� �޾ƿ;��ϴµ� ù��°�� ���� �޾ƿ���
    //�޾ƿ��°� ����Ʈ ������
    app = apps;
    part = part_
};

/*
    ���ο� ���ø����̼� �߰��ϸ�
    apps�� �߰�
*/
void Employment::add_application(Application* newapplication) {
    apps_.push_back(newappliciation);
};