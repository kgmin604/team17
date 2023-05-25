#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//Entity header
#include "MemberDB.h"
#include "CorporateMember.h"
#include "GeneralMember.h"
#include "EmploymentCollection.h"

// ȸ�� ���� package header
#include "SignUpUI.h"
#include "DeleteAccountUI.h"
#include "LogInUI.h"
#include "LogOutUI.h"

// ä�� ���� ���� package header
#include "AddEmploymentUI.h"
#include "ShowMyEmploymentsUI.h"
#include "ShowEmploymentsStatsUI.h"

//���� �� ���� ���� ���� package header
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

/* ���� ������ */

ofstream fout;
ifstream fin;
// extern ofstream fout; �ܺ� ���Ͽ��� �����ؼ� ���.

/* �Լ� */
void run();


int main(void) {
	fout.open(OUTPUT_FILE_NAME);
	fin.open(INPUT_FILE_NAME);

	run();
	
	return 0;
}

void run() {

	//Member ����
	MemberDB member_db;
	Member* curMem = NULL;

	// ȸ������ ��Ű�� UI
	SignUp sign_up;
	SignUpUI sign_up_ui(&sign_up);
	DeleteAccount delete_account;
	DeleteAccountUI delete_account_ui(&delete_account);
	LogIn login;
	LogInUI login_ui(&login);
	LogOut logout;
	LogOutUI logout_ui(&logout);

	// ä�� ���� ���� ��Ű�� UI
	AddEmployment add_employment;
	AddEmploymentUI add_employment_ui(&add_employment);
	ShowMyEmployments show_my_employments;
	ShowMyEmploymentsUI show_my_employments_ui(&show_my_employments);
	ShowEmploymentsStats show_employments_stats;
	ShowEmploymentsStatsUI show_employments_stats_ui(&show_employments_stats);

	// ���� �� ���� ���� ���� ��Ű�� UI
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
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		fin >> menu1 >> menu2;

		// �޴� ���� �� �ش� ���� ����
		switch (menu1) {
		case 1:
			if (menu2 == 1) {		// 1.1 ȸ������
				string name, number, id, pw;
				int type; 
				fin >> type; 
				fin >> name >> number >> id >> pw;

				sign_up_ui.requestSignUp(type, id, pw, name, number, member_db);

			}
			else if (menu2 == 2) {	// 1.2 ȸ�� Ż��
				delete_account_ui.deleteMember(curMem,member_db);
				// �׽����ڵ�
				// cout << "��������: " << member_db.getMemberList().size() << "\n";
				// if (curMem == NULL) cout << "�Ҹ� ����";
			}
			break;
		case 2:
			if (menu2 == 1) {		// 2.1 �α���
				string id, pw;
				fin >> id >> pw;
				login_ui.requestLogIn(curMem, id, pw, member_db);
			}
			else if (menu2 == 2) {	// 2.2 �α׾ƿ�
				logout_ui.requestLogOut(curMem);
			}
			break;
		case 3:
			if (menu2 == 1) {		// 3.1 ä�� ���� ���
				string part, deadline_date;
				int number_of_people;
				fin >> part >> number_of_people >> deadline_date;
				add_employment_ui.addEmployment((CorporateMember*)curMem, part, number_of_people, deadline_date);
			}
			else if (menu2 == 2) {	// 3.2 ��ϵ� ä�� ���� ��ȸ
				show_my_employments_ui.showMyEmployments((CorporateMember*)curMem);
			}
			break;
		case 4:
			if (menu2 == 1) {		// 4.1 ä�� ���� �˻�
				string corporate_name;
				fin >> corporate_name;
				search_employment_ui.searchEmployments((GeneralMember * )curMem, corporate_name, member_db);
			}
			else if (menu2 == 2) {	// 4.2 ä�� ����
				string business_number;
				fin >> business_number;
				apply_ui.applys((GeneralMember*)curMem, business_number,member_db);
			}
			else if (menu2 == 3) {	// 4.3 ���� ���� ��ȸ
				//show_application.requestShowApplication((GeneralMember*)curMem);
			}
			else if (menu2 == 4) {	// 4.4 ���� ���
				string business_number;
				fin >> business_number;
			}
			break;
		case 5:
			if (menu2 == 1) {		// 5.1 ���� ���� ���
				if (curMem->getType() == 1) {
					show_employments_stats_ui.showMyEmploymentsStats((CorporateMember*)curMem);
				}
				else if(curMem->getType()==2)
					show_my_stats_ui.showMyApplicationsStats((GeneralMember*)curMem);
			}
			break;
		case 6:
			if (menu2 == 1) {		// 6.1 ����
				is_program_exit = true;
			}
		}
	}
}

