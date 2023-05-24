#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

/* ���� ������ */

ofstream fout;
ifstream fin;

/* �Լ� */
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

				//�Լ� ����

				fout << "1.1. ȸ������\n";
				fout << "> " << type << ' ' << name << ' ' << number << ' ' << id << ' ' << pw << "\n";
			}
			else if (menu2 == 2) {	// 1.2 ȸ�� Ż��
				
				// �Լ� ����

				fout << "1.2. ȸ��Ż��\n";
				fout << "> " << curMem->getID() << "\n";
			}
			break;
		case 2:
			if (menu2 == 1) {		// 2.1 �α���
				string id, pw;
				fin >> id >> pw;
				// �Լ� ����
				
				fout << "2.1. �α���\n";
				fout << "> " << id << " " << pw << "\n";
			}
			else if (menu2 == 2) {	// 2.2 �α׾ƿ�
				
				string tmp = curMem->getID();

				// ��û

				fout << "2.1. �α׾ƿ�\n";
				fout << "> " << tmp << "\n";
			}
			break;
		case 3:
			if (menu2 == 1) {		// 3.1 ä�� ���� ���
				string task, total_num, deadline_date;
				fin >> task >> total_num >> deadline_date;

				fout << "3.1. ä�� ���� ���\n";
				fout << "> " << task << " " << total_num << " " << deadline_date << "\n";
			}
			else if (menu2 == 2) {	// 3.2 ��ϵ� ä�� ���� ��ȸ

			}
			break;
		case 4:
			if (menu2 == 1) {		// 4.1 ä�� ���� �˻�

			}
			else if (menu2 == 2) {	// 4.2 ä�� ����

			}
			else if (menu2 == 3) {	// 4.3 ���� ���� ��ȸ

			}
			else if (menu2 == 4) {	// 4.4 ���� ���

			}
			break;
		case 5:
			if (menu2 == 1) {		// 5.1 ���� ���� ���

			}
			break;
		case 6:
			if (menu2 == 1) {		// 6.1 ����
				is_program_exit = true;
			}
		}
	}
}
