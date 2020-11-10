#include <iostream>

template<typename iterT, typename Func>
void For_each(iterT begin, iterT end, Func pf)
{
	while(begin != end)
		pf(*begin++);
}

void printInt(int data)
{
	std::cout << data << std::endl;
}

void printString(std::string data)
{
	std::cout << data << std::endl;
}

int main(void)
{
	// 명시적으로 호출
	int arr[5] = {1, 2, 3, 4, 5};
	For_each<int*, void (*)(int)>(arr, arr+5, printInt);

	std::string sarr[2] = {"aa", "bb"};
	For_each<std::string*, void(*)(std::string)>(sarr, sarr+2, printString);
}
