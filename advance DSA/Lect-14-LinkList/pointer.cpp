#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=90;
    cout<<&a<<endl;

    int * ptr;
    ptr=&a;
    cout<<ptr<<endl;

    cout<<&ptr<<endl;

    int **papaptr;
    papaptr=&ptr;
    cout<<papaptr<<endl;
    cout<<&papaptr<<endl;
}