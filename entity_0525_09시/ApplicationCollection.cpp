#include <iostream>
#include <fstream>
#include "ApplicationCollection.h"
using namespace std;


ApplicationCollection::ApplicationCollection() {
	app_num_ = 0;
}

void ApplicationCollection::addApplication(Application* newApp) {
	app_list_.push_back(newApp);
	app_num_++;
}

void ApplicationCollection::deleteApplication(Application* delApp) {
	for(int i=0;i<app_num_;i++)
		if (app_list_[i] == delApp) {
			app_list_.erase(app_list_.begin() + i);
			app_num_--;
		}
}

vector<Application*>& ApplicationCollection::getApplicationList() {
	return app_list_;
}

int ApplicationCollection::getAppNum() {
	return app_num_;
}