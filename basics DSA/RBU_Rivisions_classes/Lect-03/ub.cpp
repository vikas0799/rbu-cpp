#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={2,3,5,7,9};
    int lb=lower_bound(arr,arr+5,5)-&arr[0];
    int ub=upper_bound(arr,arr+5,5)-&arr[0];
    cout<<lb<<" "<<ub<<endl;
    cout<<ub-lb<<endl;
}