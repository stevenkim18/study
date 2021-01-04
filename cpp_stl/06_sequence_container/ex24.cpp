#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 10; i < 51; i+=10)
		v.push_back(i);

	std::vector<int>::iterator iter;
	std::vector<int>::iterator iter2;

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	iter = v.begin() + 2;	// *iter2 = 30

	iter2 = v.erase(iter);	// *iter2 = 40

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

}
