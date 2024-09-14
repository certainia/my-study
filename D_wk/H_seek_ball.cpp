#include <iostream>
using namespace std;
int main()
{

    int A, B, C;
    cout << "请依次输入每个小球的质量：" << endl;
    cin >> A >> B >> C;

    if (A == B)
        cout << "C" << endl;
    else if (A == C)
        cout << "B" << endl;
    else
        cout << "A" << endl;

    return 0;
}