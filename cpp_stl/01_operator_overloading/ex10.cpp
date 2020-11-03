#include <iostream>

class Point
{
    private:
        int x;
        int y;

    public:
        Point(int x = 0, int y = 0)
            : x(x), y(y) {}

        void print() 
        {
            std::cout << x << "," << y << std::endl;
        }

        bool operator==(Point const &ref) const
        {
            std::cout << "== call" << std::endl;
            return (x == ref.x && y == ref.y);
        }
};

int main(void)
{
    Point p1(1,1);
    Point p2(1,1);

    if (p1 == p2)
        std::cout << "p1 == p2" << std::endl;
}