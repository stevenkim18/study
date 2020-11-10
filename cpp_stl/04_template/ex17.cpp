#include <iostream>

//iterT는 배열의 주소 값으로 넘어 옴.
template<typename iterT, typename Func>
void For_each(iterT begin, iterT end, Func pf)
{
	// 포인터로 데이터를 함수포인터의 매개변수로 넘김
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
	int arr[5] = {1, 2, 3, 4, 5};
	For_each(arr, arr+5, printInt);

	std::string sarr[2] = {"aa", "bb"};
	For_each(sarr, sarr+2, printString);
}
