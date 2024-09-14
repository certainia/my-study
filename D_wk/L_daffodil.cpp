#include <iostream>
using namespace std;
int main()
{
    int N, sum, d;  // 定义数字位数 数字求和 每位数字
    int n2, n3, n4; // 定义替换操作数
    cout << "输入位数：" << endl;
    cin >> N;

    int n1 = N; // 求出下限
    int i = 1;
    for (; n1 > 1; n1--)
    {
        i *= 10; // 求出下限
    }

    int I = i;              // 求出上限
    int n;                  // 定义初始化变量
    for (; i < 10 * I; i++) // 求出上限
    {
        sum = 0, d = 0;

        n2 = i; // 代i操作
        n = N;  // 初始化变量
        for (; n > 0; n--)
        {
            d = n2 % 10;
            n2 /= 10;

            n3 = N; // 控制循环次数
            n4 = d; // 控制所乘数字
            for (; n3 > 1; n3--)
            {
                d *= n4;
            }
            sum += d; // 相加
        }

        if (sum == i)
            cout << i << endl;
    }
}