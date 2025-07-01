#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k = k%n;

    int ans[n];
    int flag=0;
    for(int i = n-k; i<n; i++){
        // cout<<arr[i]<<" ";
        ans[flag]=arr[i];
        flag++;
    
    }
    for(int i=0; i<n-k; i++){
        // cout<<arr[i]<<" ";
        ans[flag]=arr[i];
        flag++;
    }
  for(int i=0;i<n;i++)
  {
    cout<<ans[i]<<" ";
  }


}