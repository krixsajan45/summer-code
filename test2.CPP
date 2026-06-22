#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="racecar";
    int i=0,j=s.size()-1;
    while(i<j&&s[i]==s[j])i++,j--;
    cout<<(i>=j);
}