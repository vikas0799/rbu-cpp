#include<iostream>
using namespace std;
int main()
{
    // int arr[5]={3,55,22,66,9};
    // arr[0]=10;
    //3->10
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

    // cout<<max<<" "<<index;
    //124->0
    arr[index]=0;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }









    max=arr[0];
    index=0;
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

    arr[index]=0;
    
    max=arr[0];
    index=0;
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
    cout<<"third largest number-:"<<max<<" "<<index;

}