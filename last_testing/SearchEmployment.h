#ifndef __SearchEmployment_H
#define __SearchEmployment_H

#include <iostream>
#include <string>
#include <vector>
#include "Application.h"
#include "Employment.h"
#include "GeneralMember.h"
#include "MemberDB.h"
using namespace std;

/*
    <<control>>
    - 클래스 이름: SearchEmployment
    - 클래스 설명:
    사용자에게 회사이름을 받아와 이를 바탕으로 회사회원을 찾는다.
    찾은 회사회원에게 채용정보리스트를 받는다.
    채용정보리스트의 각 채용정보에서 회사이름 사업자번호 업무 인원 신청 마감일 정보를 받아와
    파일에 출력한다.
*/
class SearchEmployment
{
private:
public:
    // 현재 로그인 된 멤버 객체, 사업자 번호, 멤버DB를 받아와 사업자 번호를 가진 회사 회원의 채용 정보 리스트를 출력한다.
    void showEmploymentList(GeneralMember* cur_mem, string corporation_name, MemberDB& mem_db);
};

#endif