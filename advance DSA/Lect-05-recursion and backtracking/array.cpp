#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n, int index,int ans){
    if(index==n){
        return ans ;
    }

    // ans=max(ans,arr[index]);
    if(arr[index]>ans)
    ans=arr[index];
  return  solve(arr,n,index+1,ans);
}
int main()
{
    int arr[5]={23,454,78,66,100};
    int n=5;
    int index=0;
    int ans=INT_MIN;
    cout<<solve(arr,n,index,ans);

}