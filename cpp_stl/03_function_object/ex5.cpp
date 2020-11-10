#include <iostream>

bool pred_less(int a, int b)
{
	return a < b;
}

struct Less
{
	bool operator() (int a, int b)
	{
		return a < b;
	}
};

int main(void)
{
	Less l;

	std::cout << "function call" << std::endl;
	std::cout << std::boolalpha; 	// print true or false
	std::cout << "10, 20 -> " << pred_less(10, 20) << std::endl;
	std::cout << "20, 10 -> " << pred_less(20, 10) << std::endl;

	std::cout << "fun obj call" << std::endl;
	std::cout << "10, 20 -> " << l(10, 20) << std::endl;
	std::cout << "20, 10 -> " << l(20, 10) << std::endl;

}

