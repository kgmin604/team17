#ifndef __ApplicationCollection_H
#define __ApplicationCollection_H

#include "Application.h"
#include <vector>

class ApplicationCollection : Application
{
private:
	vector<Application*> app_list_;
	int app_num_;
public:
	ApplicationCollection();								// 생성자. app_num_을 0으로 초기화.
	void addApplication(Application* newApp);				// 인자로 받은 Application 객체를 app_list_에 추가
	Application* deleteApplication(Application* delApp);	// 인자로 받은 Application 객체를 app_list_에서 삭제 후 해당 객체 반환
	vector<Application*>& getApplicationList();				// app_list_ 반환
	int getAppNum();										// 지원자 수 app_num 반환
};

#endif // !__ApplicationCollection_H
