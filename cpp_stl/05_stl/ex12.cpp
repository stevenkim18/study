#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 0; i < 60; i+=10)
		v.push_back(i);

	std::vector<int>::iterator normal_iter = v.begin() + 3;
	std::vector<int>::reverse_iterator r_iter(normal_iter);

	std::cout << "normal_iter = v.begin() + 3 = " << *normal_iter << std::endl;
	std::cout << "r_iter(v.begin()+3) = " << *r_iter << std::endl;
	std::cout << std::endl;

	std::vector<int>::iterator it = v.begin();
	for (; it < normal_iter; it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::vector<int>::reverse_iterator rit = r_iter;	// line 12 에서 만는 것 할당
	for (; rit < v.rend(); rit++)
		std::cout << *rit << " ";
	std::cout << std::endl;

}
