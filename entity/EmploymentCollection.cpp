#include "EmploymentCollection.h"

EmploymentCollection::EmploymentCollection() {
	emp_num_ = 0;
}

/*Employment ��ü�� �ּҸ� emp_num_ ����Ʈ�� �߰�*/
void EmploymentCollection::addEmployment(Employment* newEmp) {
	emps_.push_back(newEmp);
	emp_num_++;
}

/*Employment ��ü�� �ּҸ� emp_num_ ����Ʈ���� ����*/
Employment* EmploymentCollection::deleteEmployment(Employment* delEmp) {
	for (int i = 0; i < emp_num_; i++)
		if (emps_[i] == delEmp) {
			emps_.erase(emps_.begin() + i);
			return delEmp;
		}
}

/*emp_num_ ����Ʈ ��ȯ*/
vector<Employment*>& EmploymentCollection::getEmploymentList() {
	return emps_;
}