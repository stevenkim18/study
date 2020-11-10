#include <iostream>

void print(int a, int b)
{
	std::cout << "global " << a << ", " << b << std::endl;
}

struct Functor
{
	void operator() (int a, int b)
	{
		std::cout << "fun obj " << a << ", " << b << std::endl;
	}
};

int main(void)
{
	Functor functor;

	print(10, 20);
	functor(10, 20);
}

