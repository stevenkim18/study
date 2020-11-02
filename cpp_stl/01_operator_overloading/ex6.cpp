#include <iostream>

class Point
{
	private:
		int x;
		int y;

	public:
		Point(int x = 0, int y = 0)
			: x(x), y(y) {}

		void print() const
		{
			std::cout << x << "," << y << std::endl;
		}

		Point const operator+(const Point &arg) const
		{
			Point pt;
			pt.x = this->x + arg.x;
			pt.y = this->y + arg.y;
			return pt;
		}
};

int main(void)
{
	Point p1(2, 3);
	Point p2(4, 5);
	Point p3;

	p3 = p1 + p2;
	p3.print();

	// 직접 operator 호출
	p3 = p3.operator+(p2);
	p3.print();
}
