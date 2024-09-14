#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "输入你整活儿的天数：" << endl;
    cin >> n;

    if (n > 5)
        n %= 5;

    if (n >= 1 && n <= 3)
        cout << "打鱼"
             << "in the day" << n << endl;
    else
        cout << "晒网"
             << "in the day" << n << endl;

    return 0;
}