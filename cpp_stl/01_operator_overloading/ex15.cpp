#include <iostream>

struct FuncObject
{
    public:
        void operator() (int num) const { std::cout << num << std::endl;}
        void operator() (int num1, int num2) const { std::cout << num1 << "," << num2 << std::endl;}
};

int main(void)
{
    std::cout << "객체 생성 후 호출" << std::endl;
    FuncObject print;
    print(1);
    print(1,2);

    std::cout << "객체 생성 후 명시적 호출" << std::endl;

    print.operator()(10);
    print.operator()(10, 20);

    std::cout << "임시 객체로 호출" << std::endl;

    FuncObject()(100);
    FuncObject()(100, 200);

    std::cout << "임시 객체로 명시적 호출" << std::endl;

    FuncObject().operator()(1000);
    FuncObject().operator()(1000, 2000);
    
}
