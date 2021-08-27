class Complex {
private:
	int a;
	int b;
public:
	Complex(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void operator +(Complex& c2) {
		this->a = this->a + c2.a;
		this->b = this->b + c2.b;
	}
	void getRSum() {
		cout << this->a << endl;
	}
	void getImgSum() {
		cout << this->b << endl;
	}
};

int main()
{

	io();
	Complex c1(2, 3);
	Complex c2(3, 2);
	c1 + c2;
	c1.getRSum();
	c1.getImgSum();
	return 0;
}