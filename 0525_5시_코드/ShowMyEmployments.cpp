#include <vector>
#include <stdio.h>

#include "Employment.h"
#include "ShowMyEmployments.h"

#include <fstream>
using namespace std;
extern ofstream fout;


//ä�� ���� ����Ʈ ���


void ShowMyEmployments::showEmployments(CorporateMember* curMem) {

    string part; int numPeople;  string deadLine;
    //������ �������� ����

    vector<Employment*>& list = curMem->getEmploymentList();
    //ȸ�� ȸ���� EmploymentList ����
    //1.1.1: getEmploymentList()

    fout << "3.2. ��ϵ� ä�� ���� ��ȸ\n";

    for (const auto& employment : list) {
        employment->getDetailEmployment( part, numPeople, deadLine);
        //�� EmploymentList�� detail ��ȯ�Ͽ� ����
        //1.1.2: [For all CorporateMember's Employment] getDetailEmployment()

        fout << " >" << part << " " << numPeople << " " << deadLine << "\n"; // ����,�ο���,������ ����Ʈ ���
    }
    fout << "\n";
}
