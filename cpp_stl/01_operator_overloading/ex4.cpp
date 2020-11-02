#include <iostream>

class Point
{
	private:
		int x;
		int	y;

	public:
		Point(int x = 0, int y = 0)
			: x(x), y(y) {}

		void print() const
		{
			std::cout << x << "," << y << std::endl;
		}

		void operator+(Point point)
		{
			std::cout << "operator+ call!!" << std::endl;
		}
};

int main(void)
{
	Point p1(2, 3);
	Point p2(5, 5);

	p1 + p2;
}
