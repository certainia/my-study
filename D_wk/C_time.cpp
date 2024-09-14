#include <iostream>
using namespace std;
int main()
{

    /* int h1, h2, m1, m2, min;
    cout << "输入当前时间" << endl;
    cin >> h1 >> m1;
    cout << "输入过去时间" << endl;
    cin >> min;

    h2 = h1;
    m2 = m1 + min;
    if (m2 > 60)
    {
        h2 = h2 + m2 / 60;
        m2 = m2 % 60;
    }

    cout << h2 << m2 << endl; */

    int h, m, min;
    cout << "输入当前时间" << endl;
    cin >> h >> m;
    cout << "输入过去时间" << endl;
    cin >> min;

    m = m + min;
    if (m > 60)
    {
        h = h + m / 60;
        m = m % 60;
    }

    cout << h << m << endl;

    return 0;
}
