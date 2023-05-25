#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//Entity header
#include "MemberDB.h"
#include "CorporateMember.h"
#include "GeneralMember.h"
#include "EmploymentCollection.h"

// 회원 관리 package header
#include "SignUpUI.h"
#include "DeleteAccountUI.h"
#include "LogInUI.h"
#include "LogOutUI.h"

// 채용 정보 관리 package header
#include "AddEmploymentUI.h"
#include "ShowMyEmploymentsUI.h"
#include "ShowEmploymentsStatsUI.h"

//지원 및 지원 정보 관리 package header
#include "SearchEmploymentUI.h"
#include "ApplyUI.h"
#include "ShowApplicationUI.h"
#include "CancelApplyUI.h"
#include "showMyStatsUI.h"

#define _CRT_SECURE_NO_WARNINGS

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

/* 전역 변수들 */

ofstream fout;
ifstream fin;
// extern ofstream fout; 외부 파일에서 선언해서 사용.

/* 함수 */
void run();


int main(void) {
	fout.open(OUTPUT_FILE_NAME);
	fin.open(INPUT_FILE_NAME);

	run();
	
	return 0;
}

void run() {

	//Member 관리
	MemberDB member_db;
	Member* curMem = NULL;

	// 회원관리 패키지 UI
	SignUp sign_up;
	SignUpUI sign_up_ui(&sign_up);
	DeleteAccount delete_account;
	DeleteAccountUI delete_account_ui(&delete_account);
	LogIn login;
	LogInUI login_ui(&login);
	LogOut logout;
	LogOutUI logout_ui(&logout);

	// 채용 정보 관리 패키지 UI
	AddEmployment add_employment;
	AddEmploymentUI add_employment_ui(&add_employment);
	ShowMyEmployments show_my_employments;
	ShowMyEmploymentsUI show_my_employments_ui(&show_my_employments);
	ShowEmploymentsStats show_employments_stats;
	ShowEmploymentsStatsUI show_employments_stats_ui(&show_employments_stats);

	// 지원 및 지원 정보 관리 패키지 UI
	SearchEmployment search_employment;
	SearchEmploymentUI search_employment_ui(&search_employment);
	Apply apply;
	ApplyUI apply_ui(&apply);
	ShowApplication show_application;
	ShowApplicationUI show_application_ui(&show_application);
	//CancelApply cancle_apply;
	//CancelApplyUI cancle_apply_ui(&cancle_apply);
	showMyStats show_my_stats;
	showMyStatsUI show_my_stats_ui(&show_my_stats);

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

				sign_up_ui.requestSignUp(type, id, pw, name, number, member_db);

			}
			else if (menu2 == 2) {	// 1.2 회원 탈퇴
				delete_account_ui.deleteMember(curMem,member_db);
				// 테스팅코드
				// cout << "디비사이즈: " << member_db.getMemberList().size() << "\n";
				// if (curMem == NULL) cout << "소멸 성공";
			}
			break;
		case 2:
			if (menu2 == 1) {		// 2.1 로그인
				string id, pw;
				fin >> id >> pw;
				login_ui.requestLogIn(curMem, id, pw, member_db);
			}
			else if (menu2 == 2) {	// 2.2 로그아웃
				logout_ui.requestLogOut(curMem);
			}
			break;
		case 3:
			if (menu2 == 1) {		// 3.1 채용 정보 등록
				string part, deadline_date;
				int number_of_people;
				fin >> part >> number_of_people >> deadline_date;
				add_employment_ui.addEmployment((CorporateMember*)curMem, part, number_of_people, deadline_date);
			}
			else if (menu2 == 2) {	// 3.2 등록된 채용 정보 조회
				show_my_employments_ui.showMyEmployments((CorporateMember*)curMem);
			}
			break;
		case 4:
			if (menu2 == 1) {		// 4.1 채용 정보 검색
				string corporate_name;
				fin >> corporate_name;
				search_employment_ui.searchEmployments((GeneralMember * )curMem, corporate_name, member_db);
			}
			else if (menu2 == 2) {	// 4.2 채용 지원
				string business_number;
				fin >> business_number;
				apply_ui.applys((GeneralMember*)curMem, business_number,member_db);
			}
			else if (menu2 == 3) {	// 4.3 지원 정보 조회
				//show_application.requestShowApplication((GeneralMember*)curMem);
			}
			else if (menu2 == 4) {	// 4.4 지원 취소
				string business_number;
				fin >> business_number;
			}
			break;
		case 5:
			if (menu2 == 1) {		// 5.1 지원 정보 통계
				if (curMem->getType() == 1) {
					show_employments_stats_ui.showMyEmploymentsStats((CorporateMember*)curMem);
				}
				else if(curMem->getType()==2)
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

