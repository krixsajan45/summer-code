#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello world";
    int c=0,f=0;
    for(char x:s)
    {
        if(x!=' '&&!f)c++,f=1;
    if(x==' ')f=0;
}
cout<<c;
}