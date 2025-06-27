#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,44,54,65};
    int *ptr=&arr[0];
    // int *nrt =&arr[3];
    // cout<<ptr<<endl;
    // cout<<nrt<<endl;
    // cout<<*nrt <<endl;
    // int sum = nrt-ptr;
    // cout <<sum<<endl;
    // cout<<*ptr<<endl;

    cout<<&arr[1]<<endl;
    cout<<*ptr+1<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<(ptr+1)<<endl;
bool x=(ptr+1)==&arr[1];
cout<<x;
// bool y=*(ptr+1)==arr[1]; true
// bool y=*ptr+1==arr[1];  false


}