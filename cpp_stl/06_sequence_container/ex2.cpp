#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 10; i < 60; i+=10)
		v.push_back(i);

	for (std::vector<int>::size_type i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::cout << typeid(std::vector<int>::size_type).name() << std::endl;
}
