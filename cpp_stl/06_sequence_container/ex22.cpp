#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> v;

	for (int i = 10; i < 51; i+=10)
		v.push_back(i);

	std::vector<int>::iterator iter = v.begin() + 2;
	std::vector<int>::iterator iter2;

	// insert의 리턴 타입은 iterator
	iter2 = v.insert(iter, 100);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;

	std::cout << "*iter2 = " << *iter2 << std::endl;
}
