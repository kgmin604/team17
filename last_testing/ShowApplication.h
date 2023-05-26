#ifndef __ShowApplication_H
#define __ShowApplication_H

#include <iostream>
#include <string>
#include <vector>
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
    // 현재 로그인 된 멤버 객체를 전달받아 지원 정보 리스트를 출력한다.
    void requestShowApplication(GeneralMember* cur_mem);
};

#endif