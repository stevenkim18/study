#include <iostream>

// server side
void for_each(int *b, int *e, void (*pf)(int))
{
    while (b != e)
        pf(*b++);
}

// client side
void print1(int n)
{
    std::cout << n << std::endl;
}

void print2(int n)
{
    std::cout << 2*n << std::endl;
}

void print3(int n)
{
    std::cout << n*n << std::endl;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "print1" << std::endl;
    for_each(arr, arr+5, print1);

    std::cout << "print2" << std::endl;
    for_each(arr, arr+5, print2);

    std::cout << "print3" << std::endl;
    for_each(arr, arr+5, print3);
}