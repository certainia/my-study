#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str[11] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "fu"};
    int m, k, d, N = 1;
    cin >> m;
    if (m < 0)
    {
        cout << "fu ";
        m = -m;
    }

    int M = m;
    while (M > 9)
    {
        N *= 10; // 确定初始除数
        M /= 10;
    }

    while (m >= 1)
    {
        d = m / N;
        m %= N;  // 同时缩水十倍
        N /= 10; // 同时缩水十倍
        cout << str[d] << " ";
    }

    return 0;
}