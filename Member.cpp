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
	/* 매개변수로 받은 id와 password가 Member객체와 일치한지 아닌지를 확인 */
	bool checkIdPw(string id, string pw) {
		if (this->id == id && this->pw == pw) return true;
		else false;
	}
	int getType() {
		return type;
	}
	/* Member 객체의 id 반환 */
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
	새로운 회원이 가입했을 때
	회원종류(type),회사이름 또는 이름(name), 사업자번호 또는 주민번호(number), 아이디(id), 비밀번호(pw)를 받아
	Member 객체를 생성하고 member_list_에 추가한다.
	*/
	void addMember(int type, string name, string number, string id, string pw) {
		Member* new_mem;
		if (type == 1) { // 회사 회원
			new_mem = new CorporateMember(type, name, number, id, pw);
		}
		else if (type == 2) { // 일반 회원
			new_mem = new GeneralMember(type, name, number, id, pw);
		}
		member_list_.push_back(new_mem);
		member_num_++;
	}

	/*
	id를 매개변수로 받아 해당 id를 가진 Member를
	member_list_에서 삭제하고, 객체를 소멸시킨다.
	*/
	void deleteMember(string id) {
		Member* del_mem;
		for (int i = 0; i < member_num_; i++)
			if (member_list_[i]->getID() == id) {
				del_mem = member_list_[i];
				member_list_.erase(member_list_.begin() + i); // member_list_에서 삭제
				delete del_mem; // 객체 delete
				break;
			}
	}

	/*
	아이디(id)와 비밀번호(pw)를 매개변수로 받아 해당 값을 attribute로 가진
	Member 객체를 반환한다.
	*/
	Member* findMember(string id, string pw) {
		for (int i = 0; i < member_num_; i++)
			if (member_list_[i]->checkIdPw(id, pw))
				return member_list_[i];
	}

	/*
	회사 이름을 매개변수로 받아 해당 값을 attribute로 가진 CorporateMember를 반환한다.
	*/
	CorporateMember* findMember(string name) {
		for (int i = 0; i < member_num_; i++)
			if (member_list_[i]->getType() == 1)
				if (member_list_[i]->getName())
					return (CorporateMember*)member_list_[i]; // 다운캐스팅하여 반환
	}
};