#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     cin>>arr[i];

//data processing
     int ans[n];
     for(int i=0;i<n;i++)
     {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
        }
        ans[i]=sum;
     }
     for(int i=0;i<n;i++)
     cout<<ans[i]<<" ";


}