#include "Application.h"

#include <iostream>
#include <fstream>
using namespace std;
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
ofstream fout;
ifstream fin;

//지원했을 때 새로운 지원 정보를 생성한다 (지원) _ 사업자번호로(businessNumber)
Application::Application() {
	NumberofPeople++;
	this->part = part;
	//ApplicationCollection의 생성자 실행
}

//소멸자_지원취소 시 정보 삭제 _ 사업자번호(businessNumber)로 삭제
Application::~Application() {
	NumberofPeople--;
	//ApplicationCollection의 DeleteList 실행

}

//채용 정보의 업무 type을 가져온다 (등록한 채용정보 통계)  _ 개인인지 사업자인지 알아야
string Application::getTaskType() {
	return part;
}


//지원한 정보를 가져온다 _ 모든 application 보여주기 _일반회원 식별정보(id) 있어야
void Application::getApplication() {
	//여기서 print 해야되나?

}

//파일에서 사업자번호를 읽어온 후에 이를 반환한다
int Application::getBnum() {
	int num; 
	fin >> num;
	return num;
}