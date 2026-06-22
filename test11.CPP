#include<iostream>
using namespace std;
void reverse(int *start,int *end)
{
    while(start<end)
    {
        int t=*start;
        *start=*end;
        *end=t;
        start++;
        end--;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    cout<<"before";
    for(int i=0;i<n;i++)cout<<" "<<arr[i];
    reverse(arr,arr+n-1);
    cout<<"\nafter";
    for(int i=0;i<n;i++)cout<<" "<<arr[i];
    return 0;

}