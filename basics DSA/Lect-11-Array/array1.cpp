#include<iostream>
#include <limits.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]<max){
            // skip - max is greater
         }
         else{
            //max is small
            max=arr[i];
            index=i;
         }
    }
    cout<<max<<" "<<index;
}