#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0||n==1||n==2)
    return n;

    return fib(n-1)+fib(n-2)+fib(n-3);
}
int main()
{
    int  n=5;
   cout<< fib(n);
};