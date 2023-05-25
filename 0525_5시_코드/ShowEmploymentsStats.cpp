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

void ShowEmploymentsStats::showEmploymentsStats(CorporateMember* curMem) {

    string part; int numPeople;  string deadLine;
    //������ �������� ����

    vector<Employment*>& list = curMem->getEmploymentList();
    //ȸ�� ȸ���� EmploymentList ��������
    //1.1.1: getEmploymentList()

    map<string, int> stats;
    for(int i=0;i<list.size();i++){
        list[i]->getDetailEmployment(part, numPeople, deadLine);
        int num_of_apps = list[i]->getNumberOfApps();
        cout << part << " " << num_of_apps << "\n";
        //�� EmploymentList�� detail ��ȯ�Ͽ� ����
        //  1.1.2: [For all CorporateMember's Employment] getDetailEmployment()
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
        fout << " >" << (*it).first << " " << (*it).second << "\n"; // ä�� ���� ��� ��� (����, ������ ��)
    fout << "\n";
}
