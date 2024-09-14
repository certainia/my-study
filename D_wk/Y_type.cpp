#include <iostream>
using namespace std;
int main()
{
    int x, i = 0, j, k;
    int a[3] = {0};
    cin >> x;
    while (x > 0)
    {
        a[i] = x % 10;
        x /= 10;
        i++;
    }
    i--;

    if (i = 2)
    {
        for (k = 1; k <= a[2]; k++)
            cout << "B";
        for (k = 1; k <= a[1]; k++)
            cout << "S";
        for (j = 1; j <= 9; j++)
        {
            cout << j;
            if (a[0] == j)
                break;
        }
    }
    else if (i = 1)
    {
        for (k = 1; k <= a[1]; k++)
            cout << "S";
        for (j = 1; j <= 9; j++)
        {
            cout << j;
            if (a[0] == j)
                break;
        }
    }
    else
    {
        for (j = 1; j <= 9; j++)
        {
            cout << j;
            if (a[0] == j)
                break;
        }
    }
}
