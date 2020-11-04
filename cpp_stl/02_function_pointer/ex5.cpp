#include <iostream>

class Point
{
	private:
		int x;
		int y;

	public:
		explicit Point(int x=0, int y=0) : x(x), y(y) {}
		void print() const{ std::cout << x << "," << y << std::endl; }
		void printInt(int n) { std::cout << "n = " << n << std::endl; }
};

int main(void)
{
	Point pt(1, 2);
	Point *p = &pt;

	void (Point::*pf1)() const;
	pf1 = &Point::print;

	void (Point::*pf2)(int);
	pf2 = &Point::printInt;

	std::cout << "객체로 호출" << std::endl;
	pt.print();
	pt.printInt(1);

	std::cout << "객체로 맴버 함수 포인터를 이용해 호출" << std::endl;
	(pt.*pf1)();
	(pt.*pf2)(10);

	std::cout << "주소로 맴버 함수 포인터를 이용해 호출" << std::endl;
	(p->*pf1)();
	(p->*pf2)(100);
}
