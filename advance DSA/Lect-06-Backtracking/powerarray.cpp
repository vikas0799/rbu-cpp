#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int index,vector<int>&ans){
     if(index==n){
          for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
          }
          cout<<endl;
          return ;
     }

     //element include karna h
     ans.push_back(arr[index]);
     solve(arr,n,index+1,ans);

     //remove karne ka , backtrack or undo karne ka
     ans.pop_back();
     solve(arr,n,index+1,ans);

}
int main()
{
    int arr[3]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    solve(arr,n,0,ans);
}