#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 10; i < 51; i+=10)
		v.push_back(i);

	std::vector<int>::iterator iter = v.begin() + 2;

	std::cout << "*iter = " << *iter << std::endl;

	v.insert(iter, 3, 10);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::vector<int> v2;

	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);

	iter = v2.begin() + 1;  // *iter = 200

	// 200 자리에 v의 값들 넣기
	v2.insert(iter, v.begin(), v.end());

	// 100 (10 20 10 10 10 30 40 50) 200 300
	for (int i = 0; i < v2.size(); i++)
		std::cout << v2[i] << " ";
	std::cout << std::endl;
}
