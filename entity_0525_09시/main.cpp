#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "MemberDB.h"
#include "CorporateMember.h"
#include "GeneralMember.h"
#include "EmploymentCollection.h"

#include "CancelApplyUI.h"
#include "CancelApply.h"
#include "showMyStatsUI.h"
#include "showMyStats.h"

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


/**************나중에 doTask 안으로 옮기기 => 테스트 용으로 전역에서 사용***************/
MemberDB member_db;
Member* curMem = NULL;

//CancelApply cancle_apply;
//CancelApplyUI cancle_apply_ui(&cancle_apply);
showMyStats show_my_stats;
showMyStatsUI show_my_stats_ui(&show_my_stats);

/**************나중에 doTask 안으로 옮기기 => 테스트 용으로 전역에서 사용***************/

void test() {
	GeneralMember* gm = new GeneralMember(2, "id", "name", "num", "pw");
	member_db.addMember(gm);
	curMem = gm;
	show_my_stats_ui.showMyApplicationsStats((GeneralMember*)curMem);
}

/**************나중에 doTask 안으로 옮기기 => 테스트 용으로 전역에서 사용***************/

int main(void) {
	fout.open(OUTPUT_FILE_NAME);
	fin.open(INPUT_FILE_NAME);

	test();
	//doTask();
	
	return 0;
}

void doTask() {
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


			}
			else if (menu2 == 2) {	// 1.2 회원 탈퇴
				
			}
			break;
		case 2:
			if (menu2 == 1) {		// 2.1 로그인
				string id, pw;
				fin >> id >> pw;

			}
			else if (menu2 == 2) {	// 2.2 로그아웃
				
			}
			break;
		case 3:
			if (menu2 == 1) {		// 3.1 채용 정보 등록
				string task, total_num, deadline_date;
				fin >> task >> total_num >> deadline_date;

			}
			else if (menu2 == 2) {	// 3.2 등록된 채용 정보 조회

			}
			break;
		case 4:
			if (menu2 == 1) {		// 4.1 채용 정보 검색
				string corporate_name;
				fin >> corporate_name;

			}
			else if (menu2 == 2) {	// 4.2 채용 지원
				string business_number;
				fin >> business_number;
			}
			else if (menu2 == 3) {	// 4.3 지원 정보 조회

			}
			else if (menu2 == 4) {	// 4.4 지원 취소
				string business_number;
				fin >> business_number;
			}
			break;
		case 5:
			if (menu2 == 1) {		// 5.1 지원 정보 통계
				show_my_stats_ui.showMyApplicationsStats((GeneralMember*)curMem);
			}
			break;
		case 6:
			if (menu2 == 1) {		// 6.1 종료
				is_program_exit = true;
			}
		}
	}
}

