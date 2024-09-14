#include <iostream>
using namespace std;
int main()
{
    int x, total, flag = 1;
    char c = '0';
    cin >> x;
    total = x;
    while (c != '=')
    {
        cin >> c;
        if (c == '=')
            break; // 此处的位置也至关重要
        cin >> x;
        if (c == '+')
        {
            total += x;
        }
        else if (c == '-')
        {
            total -= x;
        }
        else if (c == '*')
        {
            total *= x;
        }
        else if (c == '/')
        {
            if (x == 0)
            {
                flag = -1;
            }
            else
            {
                total /= x;
            }
        }
        else
        {
            flag = -1;
        }
    }
    if (flag == -1)
        cout << "ERROR" << endl;
    else
        cout << total << endl;
    return 0;
}