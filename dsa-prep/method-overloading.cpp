class BaseClass {
public:
	void fun() {
		cout << "Base fun called" << endl;
	}
	void fun(int a) {
		cout << "Base fun called with 1 input called" << endl;
	}
};

int main()
{
	BaseClass obj1;
	obj1.fun();
	obj1.fun(10);
	return 0;
}