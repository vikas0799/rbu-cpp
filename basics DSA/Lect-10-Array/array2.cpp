#include<iostream>
using namespace std;
int main()
{
    //count negative and positive no..
    int n;
    cin>>n;

    int arr [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //data processing
    //linear search
    int count=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]%4==0){
        count++;
       }
    }
    cout<<count<<endl;
}