#include<bits/stdc++.h>
using namespace std;
void PI(int n){
    if(n==5)
    return ;
    else{
       cout<<"HII"<<" ";
        PI(n+1);
        cout<<"Bye"<<" ";
        cout<<"hello";
        cout<<n*n<<endl;
    }
}
int main()
{
    int n=1;
    PI(n);
}