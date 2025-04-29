#include<iostream>
using namespace std;
int main()
{
    //data storing
    int n; 
    cin>>n;
    int arr [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //data processing to find max ( constraints arr[i]>0)
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ans>arr[i]){
            //skip
        }
        else{
            ans=arr[i];
        }
    }
    
    cout<<ans<<" ";

}