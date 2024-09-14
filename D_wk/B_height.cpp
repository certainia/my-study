#include <iostream>
using namespace std;
int main()
{

    int meter, foot, inch;
    cout << "请输入你的身高：" << endl;
    cin >> meter;

    foot = meter / 30.48;
    inch = (meter / 30.48 - foot) * 12;

    cout << "阁下身高是" << foot << "英尺" << inch << "英寸" << endl;

    return 0;
}