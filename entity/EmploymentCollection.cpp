#include "EmploymentCollection.h"

EmploymentCollection::EmploymentCollection() {
	emp_num_ = 0;
}

/*Employment 객체의 주소를 emp_num_ 리스트에 추가*/
void EmploymentCollection::addEmployment(Employment* newEmp) {
	emps_.push_back(newEmp);
	emp_num_++;
}

/*Employment 객체의 주소를 emp_num_ 리스트에서 제외*/
Employment* EmploymentCollection::deleteEmployment(Employment* delEmp) {
	for (int i = 0; i < emp_num_; i++)
		if (emps_[i] == delEmp) {
			emps_.erase(emps_.begin() + i);
			return delEmp;
		}
}

/*emp_num_ 리스트 반환*/
vector<Employment*>& EmploymentCollection::getEmploymentList() {
	return emps_;
}