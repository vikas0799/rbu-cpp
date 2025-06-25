#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;  //10^12
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key; cin>>key;


    //linear search 
    bool present =false;
    for(int i=0;i<n;i++)   //traverse n times 
    {
        if(arr[i]==key){
            cout<<"key is present";
            present =true;
            break;
        }
    }
   if(present==false)
   cout<<"key is NOT present";
}