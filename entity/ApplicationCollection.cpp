#include <iostream>
#include <fstream>
#include "ApplicationCollection.h"
using namespace std;


ApplicationCollection::ApplicationCollection() {
	app_num_ = 0;
}

void ApplicationCollection::addApplication(Application* newApp) {
	application_list_.push_back(newApp);
	app_num_++;
}

Application* ApplicationCollection::deleteApplication(Application* delApp) {
	for(int i=0;i<app_num_;i++)
		if (application_list_[i] == delApp) {
			application_list_.erase(application_list_.begin() + i);
			app_num_--;
			return delApp;
		}
}

vector<Application*>& ApplicationCollection::getApplicationList() {
	return application_list_;
}