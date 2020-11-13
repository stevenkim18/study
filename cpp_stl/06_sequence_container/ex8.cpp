#include <iostream>
#include <vector>

int main(void)
{
	//0 0 0 0 0
	std::vector<int> v(5);

	// 10 20 30 40 50 변경
	for (int i = 0; i < v.size(); i++)
		v[i] = (i + 1) * 10;

	// 출력
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << "size = " << v.size() << " cap = " << v.capacity() << std::endl;

	// 사이즈 5 -> 10 으로 조정
	// 생성자 처럼 자동으로 빈 곳에는 0으로 초기화 됨
	// 10 20 30 40 50 0 0 0 0 0
	v.resize(10);

	// 출력
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << "size = " << v.size() << " cap = " << v.capacity() << std::endl;

	// 다시 사이즈를 줄이면 값들은 사라짐
	// 10 20 30 40 50 0
	// 하지만 메모리는 남아 있음. cap = 10
	v.resize(6);
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << "size = " << v.size() << " cap = " << v.capacity() << std::endl;

}
