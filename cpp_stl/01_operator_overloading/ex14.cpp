#include <iostream>

struct FuncObject
{
    public:
        void operator() (int arg) const
        {
            std::cout << "int : " << arg << std::endl;
        }
};

void print1(int arg)
{
    std::cout << "int : " << arg << std::endl;
}

int main(void)
{
    void (*print2) (int) = print1;
    FuncObject print3;

    print1(10);     // 함수 호츌
    print2(20);     // 함수포인터로 호출
    print3(30);     // 함수 객체 사용
}