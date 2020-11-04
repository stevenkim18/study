#include <iostream>

class A {};

class B
{
	public:
		B() {std::cout << "B() constructor" << std::endl;}
		B(A& a) {std::cout << "B(A& a) constructor" << std::endl;}
		B(int n) {std::cout << "B(int n) constructor" << std::endl;}
		B(double d) {std::cout << "B(double d) constructor" << std::endl;}
};

int main()
{
	A a;
	int n = 5;
	double d = 10.5;

	B b;
	b = a;	//b = B(a) 호출
	b = n;	//b = B(n) 호출
	b = d;	//b = B(d) 호출
}
