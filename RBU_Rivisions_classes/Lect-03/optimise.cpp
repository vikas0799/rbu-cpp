#include<bits/stdc++.h>
using namespace std;
int main()
{
    int height[6]={2,5,8,12,15,20};
    //int height[5]={1,2,13,13,13,20};
    int capacity=13;

    int lb=lower_bound(height,height+6,capacity)-&height[0];
    cout<<6-lb<<endl;
    
    //#jsudyufd-&arr[0]
        
    // int ans=sum(a,b);
        //    auto x=xyz();
    
}