#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i <= 9; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= 9; i++)
    {
        if (a[i] != 0)
        {
            cout << i; // 非a[i]
            a[i]--;
            break;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cout << i;
        }
    }
    return 0;
}