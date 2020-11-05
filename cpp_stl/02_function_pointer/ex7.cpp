#include <iostream>

void client();

void printHello()
{
    std::cout << "Hello" << std::endl;
    client();
}

void client()
{
    std::cout << "client fun call" << std::endl;
}

int main(void)
{
    printHello();
}

