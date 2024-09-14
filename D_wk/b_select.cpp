#include <iostream>
using namespace std;
int main()
{
    int m, n, i;
    int flag = -1;
    cin >> m >> n;
    int a[m];
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
        if (a[i] == n)
        {
            cout << i << endl;
            flag = 1;
            break;
        }
    if (flag == -1)
        cout << "ERROR" << endl;
    return 0;
}