#include <iostream>

void print(int n)
{
	std::cout << "global fun n=" << n << std::endl;
}

namespace A
{
	void print(int n)
	{
		std::cout << "namespace A global fun n=" << n << std::endl;
	}
}

class Point
{
	public:
		static void print(int n)
		{
			std::cout << "Point class static member fun n=" << n << std::endl;
		}
};

int main(void)
{
	void (*pf)(int); // 정적 함수 포인터 선언

	print(1);
	A::print(2);
	Point::print(3);

	pf = print;
	pf(10);
	pf = A::print;
	pf(20);
	pf = Point::print;
	pf(30);
}


