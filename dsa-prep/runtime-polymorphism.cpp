class BaseClass {
public:
	virtual void fun() {
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
	/*
	Although the we have a baseclass pointer but as it points
	to a dervied class object we should get derived fun so we
	need to add the virtual keyword which basically allows to
	be overriden by the derived class
	*/
	BaseClass* b = new DerivedClass();
	b->fun();
	return 0;
}