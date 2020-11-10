#include <iostream>

void print()
{
	std::cout << "global!!" << std::endl;
}

struct Functor
{
	void operator() ()
	{
		std::cout << "fun obj!!" << std::endl;
	}
};

int main(void)
{
	Functor functor;

	print();		// 전역함수 호출
	functor();		// 맴버함수 호출
}

