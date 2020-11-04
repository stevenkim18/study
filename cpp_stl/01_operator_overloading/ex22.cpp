#include <iostream>

class Point
{
	private:
		int x;
		int y;

	public:
		Point(int x=0, int y=0) : x(x), y(y) {}

		void print() const {std::cout << x << "," << y << std::endl;}
};

class PointPtr
{
	private:
		Point *ptr;

	public:
		PointPtr(Point *p) :ptr(p) {}
		~PointPtr() { delete ptr;}

		// -> 연산자 오버로딩
		Point* operator->() const
		{
			return ptr;
		}

		// * 연선자 오버로딩
		Point& operator*() const
		{
			return *ptr;
		}
};

int main(void)
{
	Point *p1 = new Point(2, 3);
	PointPtr p2 = new Point(4, 5);

	p1->print();		// p1->print() 호출
	p2->print();		// p2.operator()->()->print() 호출

	std::cout << "\n\n";

	(*p1).print();		// (*p1).print() 호출
	(*p2).print();		// p2.operator*().print() 호출

	delete p1;			// 메모리 해제
}
