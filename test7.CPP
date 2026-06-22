#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int x=42,y=24;
    cout<<"before swap: "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"after swap: "<<x<<" "<<y<<endl;
    return 0;
}