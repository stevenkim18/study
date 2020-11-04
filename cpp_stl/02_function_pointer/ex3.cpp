#include <iostream>

void print()
{
	std::cout << "static fun print()" << std::endl;
}

class Point
{
	public:
		void print()
		{
			std::cout << "member fun print()" << std::endl;
		}
};

int main(void)
{
	Point pt;
	Point *p = &pt;

	print();
	pt.print();
	p->print();
}
