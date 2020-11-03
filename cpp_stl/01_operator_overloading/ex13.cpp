#include <iostream>

class Point
{
    private:
        int x;
        int y;

    public:
        Point(int x = 0, int y = 0): x(x), y(y) {}

        void print() {std::cout << x << "," << y << std::endl;}

        int getX() const {return this->x;}
        int getY() const {return this->y;}
};

Point const operator- (Point const &p1, Point const &p2)
{
    return (Point(p1.getX() - p2.getX(), p1.getY() - p2.getY()));
}

int main(void)
{
    Point p1(2, 3);
    Point p2(1, 1);
    Point p3;

    p3 = p1 - p2;
    p3.print();
}