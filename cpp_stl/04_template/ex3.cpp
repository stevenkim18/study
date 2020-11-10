#include <iostream>

template<typename T>
void print(T a, T b)
{
	std::cout << a << "," << b << std::endl;
}

int main(void)
{
	print(1, 2);
	print(1.1, 2.2);
	print("abc", "def");
}
