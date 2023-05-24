#ifndef __ApplicationCollection_H
#define __ApplicationCollection_H

#include "Application.h"
#include <vector>

class ApplicationCollection : Application
{
private:
	vector<Application*> application_list_;
	int app_num_ = 0;
public:
	ApplicationCollection();
	void addApplication(Application* newApp);
	Application* deleteApplication(Application* delApp);
	vector<Application*>& getApplicationList();
};

#endif // !__ApplicationCollection_H
