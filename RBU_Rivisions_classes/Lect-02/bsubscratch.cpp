#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;  //10^12
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key; cin>>key;
    
    //binary search   upper bound arr[i]>key
    int low=0,high=n-1;
    int mid;
    int ans=-1;
    while(low<=high){
         mid=(low+high)/2;
        // if(arr[mid]==key){
        //     low=mid+1;
        //     // ans not upadte
        // }
        if(arr[mid]>key){
           ans=mid;
           high=mid-1; 
        }
        else{
            low=mid+1;
        }
        // if(arr[mid]=<key){
        // //   ans not upadte
        // low=mid+1;
        // }

    }
   cout<<ans<<endl;
}