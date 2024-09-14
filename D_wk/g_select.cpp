#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i, c;
    char str[81];
    gets(str);
    cin >> c;
    int m = strlen(str);
    int flag = -1;
    for (i = 0; i < m; i++)
    {
        if (str[i] == c)
            flag = 1;
        if (flag)
            cout << str[i];
    }
    if (flag != 1)
        cout << "No found!" << endl;
    else
        cout << endl;
}