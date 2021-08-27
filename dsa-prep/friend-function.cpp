//friend function have access to private data members of the class in
//which they are defined in.
class A {
private:
	int a;
public:
	friend int func(A);
};
int func(A obj) {
	obj.a = 10;
	return obj.a;
}