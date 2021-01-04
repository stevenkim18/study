#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v(10, 1);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::cout << "size: " << v.size() << std::endl;
	std::cout << "cap: " << v.capacity() << std::endl;
}
