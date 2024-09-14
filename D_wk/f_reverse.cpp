/* #include <iostream>
using namespace std;
int main()
{
    char a[80];
    int i;
    a[0]=' ';
    for ( i = 1; i < 80; i++)
    {
        a[i] = getchar();
        if(a[i]=='\n')
            break;
    }
    i--;
    int k=i;
    int flag=-1;
    for(;i!=-1;i--){
        int j=i;
        if (a[j] == ' ' || j==0){
            if(flag==-1){
                j++;
                flag=1;
                }
            for(;j<=k;j++)
                cout<<a[j];
            k=i-1;}  
    }return 0；
}

#include <stdio.h>
#include <string.h>

// 定义一个字符数组str，长度为81
char str[81];

int main()
{
    // 定义一个整数变量i，一个字符指针p
    int i, k;
    char *p;
    // 获取输入字符串
    gets(str);
    // 获取字符串长度
    k = strlen(str);
    // 获取字符串最后一个字符的地址
    p = str + k;
    // 循环判断
    while (1)
    {
        // 如果字符指针p指向字符串str的第一个字符，则退出循环
        if ( p == str )
        {
            printf("%s\n", p);
            break;
        }
        // 如果字符指针p指向的字符为空格，且下一个字符不为空格，则将p指向的字符置为空字符，并输出
        if (*p == ' ' && *(p+1) != ' ')
        {
            *p = '\0';
            printf("%s ", p+1);
        }
        // 字符指针p向前移动一位
        p--;
    }
    // 返回0
    return 0;
} */

#include <iostream>
#include <cstring>
using namespace std;
// 定义一个字符数组str，长度为81
char str[81];
int main()
{
    // 定义一个整数变量i，一个字符指针p
    int k;
    char *p;
    // 获取输入字符串
    cin.getline(str, 81);
    // 获取字符串长度
    k = strlen(str);
    // 获取字符串最后一个字符的地址
    p = str + k;
    // 循环判断
    while (true)
    {
        // 如果字符指针p指向字符串str的第一个字符，则退出循环
        if (p == str)
        {
            cout << p << endl;
            break;
        }
        // 如果字符指针p指向的字符为空格，且下一个字符不为空格，则将p指向的字符置为空字符，并输出
        if (*p == ' ' && *(p + 1) != ' ')
        {
            *p = '\0';
            cout << p + 1 << " ";
        }
        // 字符指针p向前移动一位
        p--;
    }
    // 返回0
    return 0;
}

/* 给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

        输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。
        字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，
        单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

        输出格式：每个测试用例的输出占一行，输出倒序后的句子。

        输入样例：
Hello World Here I Come
        输出样例：
Come I Here World Hello */
