#include <iostream>
using namespace std;
int main()
{
    int x, i, j;
    cin >> x;

    int a[x][3] = {0};
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < x; i++)
    {
        if (a[i][0] + a[i][1] > a[i][2])
            cout << "Case #X: true" << endl;
        else
            cout << "Case #X: false" << endl;
    }
    return 0;
}