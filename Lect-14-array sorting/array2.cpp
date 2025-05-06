#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int a;
     cin>>a;

     //processing first time index value
     int idx=-1;
     for(int i=0;i<n;i++)
     {
        if(a==arr[i]){
            idx=i;
            break;
        }
     }
     cout<<idx;

}