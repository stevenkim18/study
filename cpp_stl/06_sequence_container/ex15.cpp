#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v(5, 2);

	// 쓰레기 값이 나올 때도 있음.
	std::cout << "v[10] = " << v[10] << std::endl;

	// at은 범위를 검사하기 떄문에 try catch를 안해주면 실행파일에서 오류가 남.
	try
	{
		std::cout << v.at(10) << std::endl;
		std::cout << "try!!!!!!!!!!!" << std::endl;
	}
	catch(std::out_of_range& e)
	{
		std::cout << "catch" << std::endl;
		std::cerr << e.what() << '\n';
	}
}
