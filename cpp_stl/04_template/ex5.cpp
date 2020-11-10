#include <iostream>

template<typename T1, typename T2>
void print(T1 a, T2 b)
{
	std::cout << a << "," << b << std::endl;
}

int main(void)
{
	print(10, 1.5);		// 정수, 실수 동시 출력
	print("asd", 'c');	// 문자열, 문자 동시 출력
}
