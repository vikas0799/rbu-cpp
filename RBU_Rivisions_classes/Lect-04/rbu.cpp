#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[]={23,45,67,34,2,65};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // int * vikas;
    // vikas=arr;
    // cout<<vikas<<endl;
    // cout<<*vikas<<endl;

    //pointer arithmetics
    // int a=9;
    // a++;
    // a=a+6;
    // vikas=vikas+1;
    // cout<<vikas<<endl;
    // cout<<*vikas<<endl;
    // vikas=vikas+2;
    // cout<<vikas<<endl;
    // cout<<*vikas<<endl;


    int arr[]={23,45,67,34,2,65};
    // int n=sizeof(arr)/sizeof(arr[0]);

    int *ptr2=&arr[5];
    int *ptr1=&arr[0];

    cout<<ptr2-ptr1<<endl;
//   int *ptr;
//   ptr=&arr[3];
//   cout<<*ptr+1<<endl;


//   cout<<*(ptr-1)<<endl;

// cout<<arr.size();
// cout<<arr.length();

}
