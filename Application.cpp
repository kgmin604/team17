#include "Application.h"

#include <iostream>
#include <fstream>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
ofstream fout;
ifstream fin;

//�������� �� ���ο� ���� ������ �����Ѵ� (����) _ ����ڹ�ȣ��(businessNumber)
Application::Application() {
	NumberofPeople++;
	this->part = part;
	//ApplicationCollection�� ������ ����
}

//�Ҹ���_������� �� ���� ���� _ ����ڹ�ȣ(businessNumber)�� ����
Application::~Application() {
	NumberofPeople--;
	//ApplicationCollection�� DeleteList ����

}

//ä�� ������ ���� type�� �����´� (����� ä������ ���)  _ �������� ��������� �˾ƾ�
string Application::getTaskType() {
	return part;
}


//������ ������ �����´� _ ��� application �����ֱ� _�Ϲ�ȸ�� �ĺ�����(id) �־��
void Application::getApplication() {
	//���⼭ print �ؾߵǳ�?

}

//���Ͽ��� ����ڹ�ȣ�� �о�� �Ŀ� �̸� ��ȯ�Ѵ�
int Application::getBnum() {
	int num; 
	fin >> num;
	return num;
}