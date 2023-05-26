#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowMyEmployments.h"

#include <fstream>
using namespace std;
extern ofstream fout;


//ä�� ���� ����Ʈ ���


void ShowMyEmployments::showEmployments(CorporateMember* cur_mem) {

    string part; int num_people;  string dead_line;
    //������ �������� ����

    vector<Employment*>& list = cur_mem->getEmploymentList();
    //ȸ�� ȸ���� EmploymentList ����
    //1.1.1: getEmploymentList()

    fout << "3.2. ��ϵ� ä�� ���� ��ȸ\n";

    for (const auto& employment : list) {
        employment->getDetailEmployment( part, num_people, dead_line);
        //�� EmploymentList�� detail ��ȯ�Ͽ� ����
        //1.1.2: [For all CorporateMember's Employment] getDetailEmployment()

        fout << "> " << part << " " << num_people << " " << dead_line << "\n"; // ����,�ο���,������ ����Ʈ ���
    }
    fout << "\n";
}
