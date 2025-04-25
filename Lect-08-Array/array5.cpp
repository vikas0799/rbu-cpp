#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;

    int arr [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // data processing or operation on array 
    //to find results
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0){
        cout<<arr[i]*2<<" ";
    }
    else{
        cout<<arr[i]<<" ";
    }
  }
    
}