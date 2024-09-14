#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int m;
    char str[81];
    gets(str);
    m=strlen(str)-1;
    for(;m>=0;m--)
        cout<<str[m];
    cout<<endl;
}