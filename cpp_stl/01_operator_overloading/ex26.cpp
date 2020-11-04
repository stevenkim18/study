#include <iostream>

class A {};

class B
{
	public:
		operator A()
		{
			std::cout << "operator A() call" << std::endl;
			return A();
		}

		operator int()
		{
			std::cout << "operator int() call" << std::endl;
			return 10;
		}

		operator double()
		{
			std::cout << "operator double() call" << std::endl;
			return 10.1;
		}
};

int main(void)
{
	A a;
	int n;
	double d;

	B b;
	a = b;		// b.operator A() 암시적 호출
	n = b;		// b.operator int() 암시적 호출
	d = b;		// b.operator double() 암시적 호출

	std::cout << "n = " << n << std::endl;

	a = b.operator A();			// 명시적 호출
	n = b.operator int();
	d = b.operator double();
}
