#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowEmploymentsStats.h"
#include <map>
#include <fstream>

using namespace std;
extern ofstream fout;

//ä�� ���� ���
//ȸ�� ȸ���� ä�� ����Ʈ > [����] [������ ��] ���·� ���

void ShowEmploymentsStats::showEmploymentsStats(CorporateMember* cur_mem) {

    string part; int num_people;  string deadLine;
    //������ �������� ����

    vector<Employment*>& list = cur_mem->getEmploymentList();
    //ȸ�� ȸ���� EmploymentList ��������
    //1.1.1: getEmploymentList()

    map<string, int> stats;
    for (const auto& employment : list) {
        employment->getDetailEmployment(part, num_people, deadLine);
        int num_of_apps = employment->getNumberOfApps();
        //�� EmploymentList�� detail ��ȯ�Ͽ� ����
        //1.1.2: [For all CorporateMember's Employment] getDetailEmployment()

        if (stats.find(part) == stats.end()) { // ��� ������ ���� �������
            stats.insert({ part,num_of_apps });
        }
        else { // ��� ������ �ִ� �������
            stats[part] += num_of_apps;
        }
    }
    
    fout << "5.1.���� ���� ��� \n";
    map<string, int>::iterator it;
    for (it = stats.begin(); it != stats.end(); it++) // stats map�� �ִ� ���ҵ� ��ȸ
        fout << "> " << (*it).first << " " << (*it).second << "\n"; // ä�� ���� ��� ��� (����, ������ ��)
    fout << "\n";
}