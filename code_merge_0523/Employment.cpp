#include "Employment.h"

/*
control이 채용정보리스트 요청하면 채용정보클래스의 값을 출력한다
*/
void Employment::get_detail_employment() {
    cout << part_ << number_of_people << application_deadline_;

};

/*업무를 받아와서 컨트롤 클래스에 준다 -이후 컨트롤클래스에서 해당 업무에 대한 지원정보를 어플리케이션에서 받아온다*/
void Employment::get_task_type(vector<Application*> app, string& part) {
    //두가지 받아와야하는데 첫번째가 업무 받아오고
    //받아오는거 리스트 돌려줌
    app = apps;
    part = part_
};

/*
    새로운 어플리케이션 추가하면
    apps에 추가
*/
void Employment::add_application(Application* newapplication) {
    apps_.push_back(newappliciation);
};