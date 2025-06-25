#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;  //10^12
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key; cin>>key;

    sort(arr,arr+n);  //sorted data
    //binary search 

    int low=0,high=n-1;
    int mid;
    bool present =false;
    while(low<=high){
        // mid=(low+high)/2;
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            cout<<"key is present";
            present=true;
            break;
        }
        if(arr[mid]>key){
               high=mid-1;
        }
        if(arr[mid]<key){
              low=mid+1;
        }

    }
   
    if(present==false)
    cout<<"key is NOT present";
}