#ifndef __ShowApplication_H
#define __ShowApplication_H

#include <iostream>
#include <string>
#include <vector>
#include "GeneralMember.h"
using namespace std;
/*
    <<control>>

    - Ŭ���� �̸�: ShowApplication
    - Ŭ���� ����:
    ������� ������������Ʈ�� �޾ƿ´�.
    �������� ����Ʈ�� �� ���������� ���� ȸ���̸� ����ڹ�ȣ ���� �ο� ��û ������ ������ �޾ƿ�
    ���Ͽ� ����Ѵ�.

*/

class ShowApplication
{
private:
public:
    void requestShowApplication(GeneralMember* curMem);
};

#endif