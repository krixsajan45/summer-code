#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s="hello world";
reverse(s.begin(),s.end());
cout<<s;
}