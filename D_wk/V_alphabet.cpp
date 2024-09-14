#include <iostream>
using namespace std;
int main()
{
    char c;
    c = getchar();
    while (c != '#')
    {
        if (c >= 'a' && c <= 'z')
            c -= 32;
        else if (c >= 'A' && c <= 'Z')
            c += 32;
        cout << c;
        c = getchar();
    }
    return 0;
}