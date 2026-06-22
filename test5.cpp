#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="listen",b="listen";
    int f[26]={0},i=0;
    if(a.size()!=b.size())cout<<0;
    else
    {
        for(;i<a.size();i++)f[a[i]-'a']++,f[b[i]-'a']--;
        for(i=0;i<26&&f[i];i++);
        cout<<(i==26);
    }
}