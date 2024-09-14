#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=";
            if (i * j >= 10)
                cout << j * i << " ";
            else
                cout << j * i << "  "; // 妙哉
        }
        cout << endl;
    }

    return 0;
}