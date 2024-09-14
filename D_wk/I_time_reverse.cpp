#include <iostream>
using namespace std;
int main()
{
    int h, m;
    cout << "请输入如今的时间：" << endl;
    // cin>>h>>m;
    scanf("%d:%d", &h, &m);

    if (h >= 0 && h < 12)
        cout << h << ":" << m << " AM" << endl;
    else if (h > 12 && h < 24)
    {
        h -= 12;
        cout << h << ":" << m << " PM" << endl;
    }
    else if (h == 24)
    {
        h -= 24;
        cout << h << ":" << m << " PM" << endl;
    }

    return 0;
}