#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v(5);
	std::cout << "v  size = " << v.size() << " cap = " << v.capacity() << std::endl;

	std::vector<int> v2;
	std::cout << "v2 size = " << v2.size() << " cap = " << v2.capacity() << std::endl;

	v2.swap(v);
	std::cout << "v  size = " << v.size() << " cap = " << v.capacity() << std::endl;
}
