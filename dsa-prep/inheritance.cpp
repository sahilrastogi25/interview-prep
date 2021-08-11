class Person {
private:
	string name;
	int age;
public:
	void getName() {
		cout << "Name:" << this->name << endl;
	}
	void setName(string name) {
		this->name = name;
	}
	void getAge() {
		cout << "Age:" << this->age << endl;
	}
	void setAge(int age) {
		this->age = age;
	}
};

class Student: public Person {
private:
	int rollNumber;
public:
	void getRollNumber() {
		cout << "RollNumber:" << this->rollNumber << endl;
	}
	void setRollNumber(int rollNumber) {
		this->rollNumber = rollNumber;
	}
};

int main()
{

	io();
	Student a;
	a.setName("Sahil");
	a.getName();
	a.setAge(22);
	a.getAge();
	a.setRollNumber(18103146);
	a.getRollNumber();
	return 0;
}