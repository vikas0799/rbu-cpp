#include <bits/stdc++.h>
using namespace std;
int main()
{
    //leftshift
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k = k%n;
   for(int i=k;i<n;i++){
    cout<<arr[i]<<" ";
   }
   for(int i=0;i<k;i++){
    cout<<arr[i]<<" ";
   }
}