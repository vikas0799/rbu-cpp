#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={2,7,9,9,9,12};
    auto key=9;

    auto idx1=lower_bound(arr,arr+6,key);
    cout<<idx1<<endl;
    cout<<idx1-&arr[0]<<endl;  //index of lower bound

    auto idx2=upper_bound(arr,arr+6,key);
    cout<<idx2<<endl;
    cout<<idx2-&arr[0]<<endl;  //index of upper bound
    cout<<idx2-idx1<<endl;

}