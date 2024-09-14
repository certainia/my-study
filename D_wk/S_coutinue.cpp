#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    int sum = 0;
    cin >> m >> n;
    int a[n] = {0};

    int N = n;
    int M = m;
    for (i = 0; i < N; i++)
    {
        m = M; // 保留原数值
        n = N; // 保留原数值
        for (; n > i; n--)
        {
            a[i] += m;
            m *= 10;
        }
    }

    for (j = 0; j < i; j++) // 记住此时i值已经膨胀1跳出上次循环
        sum += a[j];

    cout << sum << endl;
}