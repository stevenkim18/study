#include <iostream>

void print(int n)
{
	std::cout << "int : " << n << std::endl;
}

int main(void)
{
	void (*pf)(int);

	pf = print;

	pf(100);
	(*pf)(100);
}
