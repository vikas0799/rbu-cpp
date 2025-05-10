#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={0,0,0,1,0,0,0,1,1,1};  //elemet 0 or 1 only
    int n=10;
    //l and r are indexes
    int l=0,r=n-1;
    while(l<r)
    {
        //l increae karte rahenge
          while(arr[l]==0&&l<r){
            l++;
          }
        //r ko decrease karte rahenge
        while(arr[r]==1&&l<r){
            r--;
        }
        //swich kar denge
        if(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}