#include<bits/stdc++.h>
using namespace std;
void PI(int n){
    if(n==101)
    return ;
    else{
        cout<<n<<" ";
        PI(n+1);

    }
}
int main()
{
    int n=1;
    PI(n);
}