#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

/* 전역 변수들 */

ofstream fout;
ifstream fin;

/* 함수 */
void doTask();

int main(void) {
	fout.open(OUTPUT_FILE_NAME);
	fin.open(INPUT_FILE_NAME);

	doTask();
	
	return 0;
}

void doTask() {
	Member* curMem = NULL;

	int menu1 = 0, menu2 = 0;
	bool is_program_exit = false;

	while (!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		fin >> menu1 >> menu2;

		// 메뉴 구분 및 해당 연산 수행
		switch (menu1) {
		case 1:
			if (menu2 == 1) {		// 1.1 회원가입
				string name, number, id, pw;
				int type; 
				fin >> type; 
				fin >> name >> number >> id >> pw;

				//함수 실행

				fout << "1.1. 회원가입\n";
				fout << "> " << type << ' ' << name << ' ' << number << ' ' << id << ' ' << pw << "\n";
			}
			else if (menu2 == 2) {	// 1.2 회원 탈퇴
				
				// 함수 실행

				fout << "1.2. 회원탈퇴\n";
				fout << "> " << curMem->getID() << "\n";
			}
			break;
		case 2:
			if (menu2 == 1) {		// 2.1 로그인
				string id, pw;
				fin >> id >> pw;
				// 함수 실행
				
				fout << "2.1. 로그인\n";
				fout << "> " << id << " " << pw << "\n";
			}
			else if (menu2 == 2) {	// 2.2 로그아웃
				
				string tmp = curMem->getID();

				// 요청

				fout << "2.1. 로그아웃\n";
				fout << "> " << tmp << "\n";
			}
			break;
		case 3:
			if (menu2 == 1) {		// 3.1 채용 정보 등록
				string task, total_num, deadline_date;
				fin >> task >> total_num >> deadline_date;

				fout << "3.1. 채용 정보 등록\n";
				fout << "> " << task << " " << total_num << " " << deadline_date << "\n";
			}
			else if (menu2 == 2) {	// 3.2 등록된 채용 정보 조회

			}
			break;
		case 4:
			if (menu2 == 1) {		// 4.1 채용 정보 검색

			}
			else if (menu2 == 2) {	// 4.2 채용 지원

			}
			else if (menu2 == 3) {	// 4.3 지원 정보 조회

			}
			else if (menu2 == 4) {	// 4.4 지원 취소

			}
			break;
		case 5:
			if (menu2 == 1) {		// 5.1 지원 정보 통계

			}
			break;
		case 6:
			if (menu2 == 1) {		// 6.1 종료
				is_program_exit = true;
			}
		}
	}
}
