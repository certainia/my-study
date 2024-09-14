#include <iostream>
using namespace std;
int main()
{

    int speed;
    cout << "请输入当前车速：" << endl;
    cin >> speed;

    if (speed > 60)
        cout << "speed"<< " " << speed << " "<< "-Speeding" << endl;
    else
        cout << "speed"<< " " << speed << " "<< "-Ok" << endl;
    return 0;
}