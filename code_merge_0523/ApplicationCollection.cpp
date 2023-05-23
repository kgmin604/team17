#include "ApplicationCollection.h"
#include "Application.h"

#include <iostream>
using namespace std;


#include <fstream>
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
ofstream fout;
ifstream fin;


//생성자
ApplicationCollection::ApplicationCollection(string part, string companyName, int num, int NumberofPeople, int applicationDeadline) {
	int Bnum; //파일에서 읽어온 사업자번호 저장하는 변수
	fin >> Bnum;
	NumberofPeople++;
	ApplicationCollection* newApp = new ApplicationCollection(part, companyName, Bnum, NumberofPeople, applicationDeadline);
	application_list.push_back(newApp);

}


//회원이 지원 취소 시 application_list 내부에 있는 지원정보를 삭제하는 함수
void ApplicationCollection::DeleteList(int num) {
	Application* del_app;
	for (int i = 0; i < application_list.size(); i++) {
		if (application_list[i]->getBnum() == num) {
			del_app = application_list[i];
			application_list.erase(application_list.begin() + i);
			delete del_app;
			break;
		}
	}



}