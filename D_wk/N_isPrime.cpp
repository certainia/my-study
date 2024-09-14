#include <iostream>
using namespace std;
int main()
{
    int x, y, i, j, cnt = 0, sum = 0;
    int isPrime = -1;
    cin >> x >> y;

    for (i = x; i <= y; i++)
    {
        isPrime = -1; // 初始化
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 1;
                cnt++;
                break;
            }
        }
        if (isPrime != 1){  //==1可以求出对应合数的性质
            cout << i << " ";
            sum += i;
        }
    }
    cout << "sum=" << sum;
    return 0;
}