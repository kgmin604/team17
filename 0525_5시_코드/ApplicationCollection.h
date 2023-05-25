#ifndef __ApplicationCollection_H
#define __ApplicationCollection_H

#include "Application.h"
#include <vector>

/*
* ApplicationCollection Ŭ����
* Application ����Ʈ�� �����Ѵ�.
* ����Ʈ�� Application�� �߰��ϰų� �ִ� Application �����ϴ� ��ɰ�
* ����� Application ����Ʈ�� ��ȯ�ϴ� ����� �ִ�.
*/
class ApplicationCollection : Application
{
private:
	vector<Application*> app_list_;
	int app_num_;
public:
	ApplicationCollection();								// ������. app_num_�� 0���� �ʱ�ȭ.
	void addApplication(Application* newApp);				// ���ڷ� ���� Application ��ü�� app_list_�� �߰�
	void deleteApplication(Application* delApp);			// ���ڷ� ���� Application ��ü�� app_list_���� ���� �� �ش� ��ü ��ȯ
	vector<Application*>& getApplicationList();				// app_list_ ��ȯ
	int getAppNum();										// ������ �� app_num ��ȯ
};

#endif // !__ApplicationCollection_H
