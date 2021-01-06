#include <iostream>

using namespace std;

int     n, m;
int     arr[8];
bool    is_used[8];

// void test(int start, int cnt)
// {
//     cout << "s: " << start << " c: " << cnt << " (";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << ") {";
//     for (int i = 0; i < n; i++)
//         cout << is_used[i] << " ";
//     cout << "}\n";
// }

void printAll()
{   
    for (int i = 0; i < m; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return;
}

void fun(int start, int cnt)
{
    //test(start, cnt);
    if (cnt == m)
        printAll();
    
    for (int i = start; i < n; i++)
    {
        if (!is_used[i])
        {
            arr[cnt] = i + 1;
            is_used[i] = true;
            // fun(start + 1, cnt + 1);
            fun(i + 1, cnt + 1);
            is_used[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    fun(0, 0);
}