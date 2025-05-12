#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={2,5,0,8,1};
    int left[5];
    left[0]=0;
    for(int i=1;i<5;i++)
    {
        left[i]=max(left[i-1],arr[i-1]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<left[i]<<" ";
    }
}