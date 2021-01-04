#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
	std::vector<int> v;

	v.push_back(3);
	v.push_back(10);
	v.push_back(20);
	v.push_back(1);
	v.push_back(30);
	v.push_back(22);

	sort(v.begin(), v.end(), std::less<int>());
	std::vector<int>::iterator iter = v.begin();
	for (; iter != v.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;

	sort(v.begin(), v.end(), std::greater<int>());
	for (iter = v.begin(); iter != v.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
}
