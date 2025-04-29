#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //method-1
    //sum of n number
    //cout<<n*(n+1)/2;

    //method-2
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum =sum+i;
    // }
    // cout<<sum;

    //method-3
    //storing 0 to n where n is include 0 1 2 .....n
    int arr [n+1];
    for(int i=0;i<=n;i++)
    {
        arr[i]=i;
    }

    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum<<" ";

}