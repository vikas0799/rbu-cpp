#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[]={1,2,3};
    // int target=90;
int arr[]={23,56,34,22,78};
int *x=arr;
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    cout<<*x<<" "<<x<<endl;
    x=x+1;  //due to pointer arithmetic, move on next block
}
}