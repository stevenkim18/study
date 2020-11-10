#include <iostream>

template<typename T, int size>
void print_array(T* arr)
{
	for (int i = 0; i < size; i++)
		std::cout << "[" << i << "]:" << arr[i] << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	int arr1[4] = {1, 2, 3, 4};
	print_array<int, 5>(arr1);

	double arr2[2] = {1.11, 2.11};
	print_array<double, 2>(arr2);
}

