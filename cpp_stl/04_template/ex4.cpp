#include <iostream>

template<typename T>
void print(T a, T b)
{
	std::cout << a << "," << b << std::endl;
}

int main(void)
{
	print<int>(11, 22);
	print<double>(1.1, 2.2);
	print<std::string>("ab", "cd");
}
