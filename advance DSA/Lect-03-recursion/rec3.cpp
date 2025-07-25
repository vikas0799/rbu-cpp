#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if(n==1)
    return ;

    cout<<n<<endl;
    cout<<"bye"<<endl;
    solve(n-1);
    cout<<"hi"<<endl;  //backword recursion line of code
}
int main()
{
    int n = 5;
     solve(n);
}