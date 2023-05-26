#include <iostream>
#include <fstream>
#include "ApplicationCollection.h"
using namespace std;


ApplicationCollection::ApplicationCollection() {
	app_num_ = 0;
}

void ApplicationCollection::addApplication(Application* new_app) {
	app_list_.push_back(new_app);
	app_num_++;
}

void ApplicationCollection::deleteApplication(Application* del_app) {
	for(int i=0;i<app_num_;i++)
		if (app_list_[i] == del_app) {
			app_list_.erase(app_list_.begin() + i);
			app_num_--;
			break;
		}
}

vector<Application*>& ApplicationCollection::getApplicationList() {
	return app_list_;
}

int ApplicationCollection::getAppNum() {
	return app_num_;
}