#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v;

	for (int i = 0; i < 60; i+=10)
		v.push_back(i);

	std::vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 20);

	std::cout << "*iter = " << *iter << std::endl;

	iter = find(v.begin(), v.end(), 100);
	if (iter == v.end())
		std::cout << "fail!!" << std::endl;
}
