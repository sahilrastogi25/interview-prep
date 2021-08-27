class A {
	int a, b;
public:
	//parameterised constructor
	A(int a, int b) {
		this->a = a;
		this->b = b;
	}
	//deep copy constructor
	A(A &p) {
		this->a = p.a;
		this->b = p.b;
	}
	void getA() {
		cout << this->a << endl;
	}
	void getB() {
		cout << this->b << endl;
	}
	//destructor
	~A() {
		cout << "Destructor called" << endl;
	}
};