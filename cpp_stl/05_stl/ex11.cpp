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

	std::vector<int>::reverse_iterator r_it = v.rbegin();
	for (; r_it < v.rend(); r_it++)
		std::cout << *r_it << " ";
	std::cout << std::endl;
}
