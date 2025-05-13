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
    for(int i = n-k; i<n; i++){
        //printing last k element in starting
        cout<<arr[i]<<" ";
    }
    for(int i=0; i<n-k; i++){
// printing n-k elelemt in last
        cout<<arr[i]<<" ";
    }

return 0;
}