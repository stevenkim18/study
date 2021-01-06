#include <iostream>

using namespace std;

int     N;
int     arr[10];
bool    isused1[15];    // 열 확인
bool    isused2[30];    // 좌측 하단에서 우측 상단 대각선 (x + y)
bool    isused3[30];    // 좌측 상단에서 우측 하단 대각선 (x - y)

int     cnt = 0;

bool is_all_safe(int x, int y)
{
    if (isused1[y])
        return (false);
    if (isused2[x + y])
        return (false);
    if (isused3[x - y + N - 1])
        return (false);
    return (true);
}

void fun(int x)
{   
    //cout << "fun(x=" << x << ")" << endl;
    // N queen 이 완성 되었을 때!
    if (x == N)
    {
        cnt++;
        for (int i = 0; i < N; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for (int y = 0; y < N; y++)
    {   
        //cout << "(" << x << ", " << y << ")" << endl;
        if (is_all_safe(x, y))
        {
            isused1[y] = true;
            isused2[x + y] = true;
            isused3[x - y + N - 1] = true;
            arr[x] = y;
            fun(x + 1);
            isused1[y] = false;
            isused2[x + y] = false;
            isused3[x - y + N - 1] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    fun(0);
    cout << "count=" << cnt;
}