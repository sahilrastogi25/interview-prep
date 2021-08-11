class Student {
//Private Data members
	string name;
	int age;
	int rollNumber;
	string gender;
public:
//Default Constructor
	Student() {
		cout << "Default Constructor" << endl;
	}
//Paramterised Constructor
	Student(string s, int age, int rn, string gender) {
		this->name = s;
		this->age = age;
		this->rollNumber = rn;
		this->gender = gender;
	}
//Copy Constructor
	Student(Student& a) {
		this->name = a.name;
		this->age = a.age;
		this->rollNumber = a.rollNumber;
		this->gender = a.gender;
	}
	void getInfo() {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
		cout << "Roll Number:" << rollNumber << endl;
		cout << "Gender:" << gender << endl;
	}
	void setName(string s) {
		this->name = s;
	}
	bool operator == (Student&a) {
		if (this->name == a.name and this->age == a.age and this->rollNumber == a.rollNumber and this->gender == a.gender) {
			return true;
		} else {
			return false;
		}
	}
	~Student() {
		cout << "Destructor Called" << endl;
	}
};



int main()
{

	io();
	Student s1("Sahil", 22, 18103146, "Male");
	Student s2("Sankalp", 21, 18103147, "Male");
	s1.getInfo();
	s2.setName("Navdha");
	Student s3(s2);
	s2.getInfo();
	s3.getInfo();
	if (s2 == s3) {
		cout << "True";
	} else {
		cout << "False";
	} cout << endl;
	Student s4;
	return 0;
}