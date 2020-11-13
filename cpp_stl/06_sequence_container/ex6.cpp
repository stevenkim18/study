#include <iostream>
#include <vector>

int main(void)
{
	// 5개를 0으로 초기화
	std::vector<int> v1(5);

	for (int i = 1; i < 6; i++)
		v1.push_back(i);

	for (int i = 0; i < v1.size(); i++)
		std::cout << v1[i] << " ";
	std::cout << std::endl;

	std::vector<int> v2(5);
	for (int i = 0; i < v2.size(); i++)
		v2[i] = (i + 1) * 10;

	for (int i = 0; i < v2.size(); i++)
		std::cout << v2[i] << " ";
	std::cout << std::endl;
}
