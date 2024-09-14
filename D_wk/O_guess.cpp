#include <iostream>
using namespace std;
int main()
{
    int n, cnt = 0, Cnt, x;
    n = rand() % 100 + 1;

    cout << "输入你限定的最大次数：" << endl;
    cin >> Cnt;
    cout << "输入你猜的数字：" << endl;
    for (; cnt < Cnt; cnt++)
    {
        cin >> x;
        if (x <= 0)
        {
            cout << "这局重开" << endl;
            break; // 符合条件则跳出
        }
        if (x == n)
        {
            cout << "猜对了" << endl;
            break; // 符合条件则跳出
        }
        else
        {
            if (x > n)
                cout << "猜大了" << endl;
            else
                cout << "猜小了" << endl;
        }
    }
    if (cnt == 1)
        cout << "神来之笔" << endl;
    else if (cnt > 1 && cnt <= 3)
        cout << "妙手回春" << endl;
    else if (cnt > 3 && cnt < Cnt)
        cout << "绝境逢生" << endl;
    else
        cout << "这局重开" << endl;

    return 0;
}
