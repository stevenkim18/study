#include <iostream>
#include <vector>

int main(void)
{
	// 0 0 0 0 0
	std::vector<int> v(5);

	std::cout << "size = " << v.size() << " cap = " << v.capacity() << std::endl;

	// vector에 있는 값 비움.
	// 값은 삭제 되어도 메모리는 남아 있음.
	v.clear();
	std::cout << "v.clear()" << std::endl;
	std::cout << "size = " << v.size() << " cap = " << v.capacity() << std::endl;

	// 값이 한개도 없으면 empty() => true
	if (v.empty())
		std::cout << "vector empty!!" << std::endl;
}
