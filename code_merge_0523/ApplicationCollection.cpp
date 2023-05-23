#include "ApplicationCollection.h"
#include "Application.h"

#include <iostream>
using namespace std;


#include <fstream>
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
ofstream fout;
ifstream fin;


//������
ApplicationCollection::ApplicationCollection(string part, string companyName, int num, int NumberofPeople, int applicationDeadline) {
	int Bnum; //���Ͽ��� �о�� ����ڹ�ȣ �����ϴ� ����
	fin >> Bnum;
	NumberofPeople++;
	ApplicationCollection* newApp = new ApplicationCollection(part, companyName, Bnum, NumberofPeople, applicationDeadline);
	application_list.push_back(newApp);

}


//ȸ���� ���� ��� �� application_list ���ο� �ִ� ���������� �����ϴ� �Լ�
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