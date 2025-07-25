#include<bits/stdc++.h>
using namespace std;
int fact(int n){
//base
if(n==0)
return 1;

//reursive case or recurrence ralation 
    return n*fact(n-1);  //trust on recursive case that its return results
}
int main()
{
    int n=5;
    cout<<fact(n);
}