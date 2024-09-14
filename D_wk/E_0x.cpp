#include <iostream>
using namespace std;
int main()
{

    int n, x, y;
    cout << "输入你的操作数：" << endl;
    cin >> n;

    x = n / 16;
    y = n % 16;

    cout << x << y << endl;       //两种方式


    int z = n / 16 * 10 + n % 16; //两种方式
    cout << z << endl;        
 
    return 0;
}