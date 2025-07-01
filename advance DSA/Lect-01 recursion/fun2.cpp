#include<bits/stdc++.h>
using namespace std;

int summation(int n){
    //base case
    if(n==1){
        return 1;
    }

    // recursive case/transition state
    return summation(n-1)+n;
}
int main()
{
    int n=6;
    cout<<summation(n);
}