#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 10; i < 111; i+=10)
	{
		std::cout << "size: " << v.size() << " cap: " << v.capacity() << std::endl;
		v.push_back(i);
	}

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}
