#include<iostream>
using namespace std;
int main()
{
    int arr[3]={10,20,30};
    int *p=arr;
    cout<<"array elements: ";
    for(int i=0;i<3;i++)
    {
        cout<<*(p+i)<<" ";
    }
    return 0;
}