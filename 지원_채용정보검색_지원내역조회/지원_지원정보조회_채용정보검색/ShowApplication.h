#ifndef __ShowApplication_H
#define __ShowApplicatoin_H

#include <iostream>
#include <string>
#include <vector>
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
using namespace std;
/*
    <<control>>

    - 클래스 이름: ShowApplication
    - 클래스 설명:
    사용자의 지원정보리스트를 받아온다.
    지원정보 리스트의 각 지원정보에 대해 회사이름 사업자번호 업무 인원 신청 마감일 정보를 받아와
    파일에 출력한다.

*/

class ShowApplication
{
private:
public:
    void ShowApplications(GeneralMember *curMem);
};

#endif