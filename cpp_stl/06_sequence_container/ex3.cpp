#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 10; i < 60; i+=10)
		v.push_back(i);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::cout << "size = " << v.size() << std::endl;
	std::cout << "capacity = " << v.capacity() << std::endl;
	std::cout << "max_size = " << v.max_size() << std::endl;
}
