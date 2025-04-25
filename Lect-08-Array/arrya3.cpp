#include<iostream>
using namespace std;
int main()
{
    int arr [6];
    //input data
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    // cout<<arr[0]*2+arr[5]*2<<" ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]*arr[i]<<" ";
    }


}