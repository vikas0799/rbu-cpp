#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    // 1st min
    int ans=INT_MAX;
    int index=0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]<ans){
            ans=arr[i];
            index=i;
         }
         else{
            //skip
         }
    }
    // cout<<ans<<" "<<index;
    arr[index]=INT_MAX;   //smallest value distroy

    //.............................
    // 2nd min
    index=0;
    ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
        {
            ans=arr[i];
            index=i;
        }
        else{
            //ans is small
            // skip
            
        }
    }
    cout<<ans<<" "<<index;


}