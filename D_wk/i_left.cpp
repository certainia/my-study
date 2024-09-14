#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str[101];
    gets(str);
    int m = strlen(str);
    int x, flag = -1;
    cin >> x;
    int i, j;
    // 第一次遍历：从前往后，把字符串中的字符复制到字符串的后面
    for (i = 0; i < m; i++){
        if (i == x){
            flag = 1;
        }
        if (flag==1){
            for (j = 0; j < x ; j++){
                str[m + j] = str[j];
                flag = 0;
            }
        }
        if(flag==0){
            str[i-x]=str[i];  
        }
        if (i >= m - x ){
            str[i] = str[i+x];
        }
    }
    // 第二次遍历：从前往后，输出字符串
    for (i = 0; i < m; i++){
        cout << str[i];
    }
    return 0;
}