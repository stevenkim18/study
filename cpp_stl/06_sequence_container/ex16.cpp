#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v(5, 1);

	// 1 1 1 1 1
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	v.assign(4, 2);

	// 2 2 2 2 
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}
