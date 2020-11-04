#include <iostream>

class Point
{
	private:
		int x;
		int y;

	public:
		explicit Point(int x=0, int y=0) : x(x), y(y) {}
		void print() const {std::cout << x << "," << y << std::endl;}
};

int main(void)
{
	Point p;

	p.print();

	//p = 10;		// explicit 가 없으면 Point(10, 0)으로 컴파일 됨.
	p = Point(10);	// Point(10, 0)의 명시적 호출
	p.print();
}
