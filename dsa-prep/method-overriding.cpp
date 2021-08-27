class BaseClass {
public:
	void fun() {
		cout << "Base fun called" << endl;
	}
};
class DerivedClass: public BaseClass {
public:
	void fun() {
		cout << "Derived fun called" << endl;
	}
};

int main()
{
	BaseClass obj1;
	DerivedClass obj2;
	obj1.fun();
	obj2.fun();
	return 0;
}