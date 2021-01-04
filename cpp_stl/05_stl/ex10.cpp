#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 0; i < 60; i+=10)
		v.push_back(i);

	std::vector<int>::iterator iter = v.begin();
	for (; iter != v.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;

	std::reverse_iterator<std::vector<int>::iterator> r_it(v.end());
	std::reverse_iterator<std::vector<int>::iterator> r_ite(v.begin());

	for (; r_it != r_ite; r_it++)
		std::cout << *r_it << " ";
	std::cout << std::endl;

}
