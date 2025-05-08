#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<=1)
    return false;
    if(n==2)
        return true;
    bool ans=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
         ans=false;
         break;
        }
    }
    return ans;
}

int main()
{
    int n; cin>>n;

    bool x=prime(n);
    if(x==false){
        cout<<"not a prime";
    }
    else{
        cout<<"prime no";
    }
}