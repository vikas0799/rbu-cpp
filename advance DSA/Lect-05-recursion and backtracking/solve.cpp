#include<bits/stdc++.h>
using namespace std;
int solve(int x,int n){
    if(n==0){
        return 1;
    }

    return x*solve(x,n-1);
}
int main()
{
    int n=3;
    int x=5;
    int ans=solve(x,n);
    cout<<ans;
}