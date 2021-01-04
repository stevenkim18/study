#include <iostream>

int count = 1;
int n, m;
int arr[10];
bool is_used[10];

void printTest(int k)
{
    std::cout << "c" << count << " ";
    std::cout << "fun(" << k << ") [";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "] {";
    for (int i = 0; i < n; i++)
        std::cout << is_used[i] << " ";
    std::cout << "}" << std::endl;
    count++;
}

void printAll()
{   
    for (int i = 0; i < m; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    return;
}

void fun(int k)
{
    int c;
    c = count;
    printTest(k);
    if (k == m)
        printAll();
    
    for (int i = 0; i < n; i++)
    {
        if (!is_used[i])
        {
            arr[k] = i + 1;
            is_used[i] = true;
            fun(k + 1);
            is_used[i] = false;
        }
    }
    std::cout << "c" << c << " end" << std::endl;
}

int main()
{
    // n = 10;
    // printTest(10);
    std::cin >> n >> m;
    fun(0);
}