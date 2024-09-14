#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // 输入字符串
    char str[81];
    char stri[10];
    gets(str);
    gets(stri);
    // 查找子串
	char *p = strstr(str, stri);
	while(1)
	{
        int i=0;
		// 查找子串，如果找到，则进行替换
		char *p = strstr(str, stri);
		if ( p )
		{
			// 遍历子串后面的字符，进行替换
			for ( i=0; i<strlen(p) - strlen(stri); i++ )
			{
				p[i] = p[strlen(stri) + i];
			}
			p[i] = '\0';
	    }
	    else
		{
	    	// 如果没有找到子串，则输出原字符串
	    	puts(str);
	    	// 结束程序
	    	break;
		}
	}
    return 0;
} 


/* 输入2个字符串S1和S2，要求删除字符串S1中出现的所有子串S2，即结果字符串中不能包含S2。

        输入格式：

输入在2行中分别给出不超过80个字符长度的、以回车结束的2个非空字符串，对应S1和S2。

        输出格式：

在一行中输出删除字符串S1中出现的所有子串S2后的结果字符串。

        输入样例：
Tomcat is a male ccatat
cat
        输出样例：
Tom is a male*/


