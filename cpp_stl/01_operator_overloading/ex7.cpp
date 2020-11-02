#include <iostream>

class Point
{
	private:
		int x;
		int y;

	public:
		Point(int x = 0, int y = 0)
			:x(x), y(y)	{}

		void print() const
		{
			std::cout << x << "," << y << std::endl;
		}
		// ++ 먼저
		void operator++()
		{
			std::cout << "prefix" << std::endl;
		}
		// ++ 나중에
		void operator++(int)
		{
			std::cout << "postfix" << std::endl;
		}
};

int main(void)
{
	Point p(1,1);

	p++;

	++p;
}
