#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={0,0,0,1,1,0};
    // sort(arr,arr+6);
    // vector<int>v1;
    // vector<int>v2;
    int cnt0=0, cnt1=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==0)
        cnt0++;
        else
        cnt1++;
    }
    for(int i=0;i<cnt0;i++)
    {
        arr[i]=0;
    }
    for(int i=cnt0;i<6;i++){
        arr[i]=1;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }




    //
//    while(cnt0!=0){
//     cout<<0<<" ";
//     cnt0--;
//    }

//    while(cnt1!=0){
//     cout<<1<<" ";
//     cnt1--;
//    }
//    cout<<endl;


// for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

    // for(int i=1;i<=cnt0;i++){
    //     cout<<0<<" ";
    // }
    // for(int i=1;i<=cnt1;i++){
    //     cout<<1<<" ";
    // }
    
}