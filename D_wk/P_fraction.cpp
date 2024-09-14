#include <iostream>
using namespace std;
int main()
{
    int i, j, Cnt, q;
    float sum = 0;
    int cnt = 0;
    cin >> Cnt;

    i = 1, j = 1;
    for (; cnt < Cnt; cnt++)
    {
        sum += 1.0 * i / j;
        q = j;
        j = i;
        i = q + j;
    }

    cout << sum << endl;
    return 0;
}