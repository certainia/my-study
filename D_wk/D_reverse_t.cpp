#include <iostream>
using namespace std;
int main()
{

    int n, x, y, z;
    cout << "输入你要操作的数字：" << endl;
    cin >> n;

    x = n / 100;
    y = n / 10 - 10 * x;
    z = n % 10;

    cout << z * 100 + y * 10 + x;

    cout << z << y << x << endl; // 前导0
    return 0;
}