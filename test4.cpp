#include<iostream>
#include<string>
using namespace std;
int main()
{

string s="hello world";
for(char &x:s)x=toupper(x);
cout<<s;
}