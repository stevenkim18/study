#include <iostream>

class Adder
{
	private:
		int total;

	public:
		explicit Adder(int n = 0) : total(n) {}

		int operator() (int n)
		{
			return total += n;
		}
};

int main(void)
{
	Adder add(0);

	std::cout << add(10) << std::endl;
	std::cout << add(10) << std::endl;
	std::cout << add(10) << std::endl;
}
