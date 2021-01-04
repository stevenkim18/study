#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v(5, 1);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::vector<int>::const_iterator c_iter = v.begin();

	std::cout << "*c_iter = " << *c_iter << std::endl;

	// const_iterator에는 대입불가. 읽기만 가능
	// *iter = 100;
}
