/* #include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    int cnt = 0;
    cout << "请输入索引数字：" << endl;
    cin >> n;

    for (i = n; i < n + 4; i++)
    {
        for (j = n; j < n + 4; j++)                //误写成i < n + 4;
        {
            for (k = n; k < n + 4; k++)
            {
                if (i != j && i != k && j != k)    //误写成i < n + 4;
                {
                    cout << i << j << k ;
                    cnt++;

                if (cnt % 6 == 0)
                    cout << endl;
                else
                    cout << " ";
                }

            }
        }
    }
    return 0;
} */
#include <iostream>
using namespace std;
int main()
{
    int one, two, five, x;
    cin >> x;
    for (one = 0; one <= x * 10; one++)
    {
        for (two = 0; two <= x * 10 / 2; two++)
        {
            for (five = 0; five <= x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                    cout << one << " " << two << " " << five << endl;
            }
        }
    }
    return 0;
}
