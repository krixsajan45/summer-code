#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello world",v="aeiouAEIOU";
    int c=0;
    for(char x:s)if (v.find(x)!=string::npos)c++;
    cout<<c;   
}