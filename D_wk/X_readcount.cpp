#include <iostream>
using namespace std;
int main()
{
    int n, d, m = 0;
    cin >> n;
    while (n > 0)
    {
        d = n % 10;
        n /= 10;
        m += d;
    }

    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int k, N = 1;
    int M = m;
    while (M > 9)
    {
        N *= 10;
        M /= 10;
    }

    while (m >= 1)
    {
        d = m / N;
        m %= N;
        N /= 10;
        cout << str[d] << " ";
    }

    return 0;
}