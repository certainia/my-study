#include <iostream>
using namespace std;
int main()
{
    char a[30];
    int b[100] = {0}, j = 0, cnt = 0;
    for (int i = 1; a[i - 1] != '.'; i++)
    {
        a[i] = getchar(); // 双指放在触控板实现粘贴

        if (a[i] != ' ' && a[i] != '.')
            cnt++;
        else
        {
            b[j++] = cnt; // a[i++]=a[j]相当于a[i]=a[j],i++;
            cnt = 0;
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (b[i] != 0)
            cout << b[i] << " ";
    }
    return 0;
}