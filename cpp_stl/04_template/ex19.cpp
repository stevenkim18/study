#include <iostream>

template<typename iterT, typename Func>
void For_each(iterT begin, iterT end, Func pf)
{
	while(begin != end)
		pf(*begin++);
}

template<typename T>
void print(T data)
{
	std::cout << data << std::endl;
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	For_each(arr, arr+5, print<int>);

	// print 함수를 호출 할때 명시적으로 타입을 지정해줘야 한다.
	std::string sarr[2] = {"aa", "bb"};
	For_each(sarr, sarr+2, print<std::string>);
}
