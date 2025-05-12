#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={2,5,0,8,1};
    int rightmax[5];
    rightmax[5-1]=0;
    for(int i=5-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
    }                 
    for(int i=0;i<5;i++)
      cout<<rightmax[i]<<" ";
}