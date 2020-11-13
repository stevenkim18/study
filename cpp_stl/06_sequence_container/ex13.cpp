#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
		v.push_back(i);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	v.front() = 100;
	v.back() = 100;

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}
