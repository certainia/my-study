#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    cin >> x;
    char cc = getchar();
    cin >> y;

    for (i = x; i > 2; i--)
    { // 从高到低
        if (x % i == 0 && y % i == 0)
        {
            x /= i;
            y /= i;
        }
    }
    cout << x << "/" << y << endl;
}