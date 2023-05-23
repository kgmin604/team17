#ifndef __ApplicationCollection_H
#define __ApplicationCollection_H

#include "Application.h"
#include <vector>

class ApplicationCollection : Application
{
private:
	vector<Application*> application_list;
public:
	void DeleteList(int num);
	ApplicationCollection(string part, string companyName, int num, int NumberofPeople, int applicationDeadline);

};

#endif // !__ApplicationCollection_H
