#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j, flag = -1, sum = 0, cnt = 0;
    cin >> m >> n;

    for (i = 2; i < 10000; i++)
    {
        flag = -1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            continue;
        sum += 1;
        if (sum >= m && sum <= n)
        {
            cout << i << " ";
            cnt += 1;
        }
        if (cnt % 10 == 0 && cnt != 0)
            cout << endl;
    }
}