class Member {
protected:
	int type;
	string id;
	string pw;
public:
	Member(int type, string id, string pw) {
		this->type = type;
		this->id = id;
		this->pw = pw;
	}
	/* �Ű������� ���� id�� password�� Member��ü�� ��ġ���� �ƴ����� Ȯ�� */
	bool checkIdPw(string id, string pw) {
		if (this->id == id && this->pw == pw) return true;
		else false;
	}
	int getType() {
		return type;
	}
	/* Member ��ü�� id ��ȯ */
	string getID() {
		return id;
	}
	virtual string getName();
	virtual string number();
};

class GeneralMember : public Member {
	string name;
	string number;
public:
	string getName() {
		return name;
	}
};

class CorporateMember : public Member {
	string name;
	string number;
public:
	string getName() {
		return name;
	}
};

class MemberDB {
	vector<Member*> member_list_;
	int member_num_;
public:
	MemberDB() {
		member_num_ = 0;
	}
	/*
	���ο� ȸ���� �������� ��
	ȸ������(type),ȸ���̸� �Ǵ� �̸�(name), ����ڹ�ȣ �Ǵ� �ֹι�ȣ(number), ���̵�(id), ��й�ȣ(pw)�� �޾�
	Member ��ü�� �����ϰ� member_list_�� �߰��Ѵ�.
	*/
	void addMember(int type, string name, string number, string id, string pw) {
		Member* new_mem;
		if (type == 1) { // ȸ�� ȸ��
			new_mem = new CorporateMember(type, name, number, id, pw);
		}
		else if (type == 2) { // �Ϲ� ȸ��
			new_mem = new GeneralMember(type, name, number, id, pw);
		}
		member_list_.push_back(new_mem);
		member_num_++;
	}

	/*
	id�� �Ű������� �޾� �ش� id�� ���� Member��
	member_list_���� �����ϰ�, ��ü�� �Ҹ��Ų��.
	*/
	void deleteMember(string id) {
		Member* del_mem;
		for (int i = 0; i < member_num_; i++)
			if (member_list_[i]->getID() == id) {
				del_mem = member_list_[i];
				member_list_.erase(member_list_.begin() + i); // member_list_���� ����
				delete del_mem; // ��ü delete
				break;
			}
	}

	/*
	���̵�(id)�� ��й�ȣ(pw)�� �Ű������� �޾� �ش� ���� attribute�� ����
	Member ��ü�� ��ȯ�Ѵ�.
	*/
	Member* findMember(string id, string pw) {
		for (int i = 0; i < member_num_; i++)
			if (member_list_[i]->checkIdPw(id, pw))
				return member_list_[i];
	}

	/*
	ȸ�� �̸��� �Ű������� �޾� �ش� ���� attribute�� ���� CorporateMember�� ��ȯ�Ѵ�.
	*/
	CorporateMember* findMember(string name) {
		for (int i = 0; i < member_num_; i++)
			if (member_list_[i]->getType() == 1)
				if (member_list_[i]->getName())
					return (CorporateMember*)member_list_[i]; // �ٿ�ĳ�����Ͽ� ��ȯ
	}
};