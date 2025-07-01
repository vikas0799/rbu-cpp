#include<bits/stdc++.h>
using namespace std;
int isha(){
    cout<<"hi isha"<<endl;
     return 500;
}

int ankita(){
    cout<<"hi ankita"<<endl;
   int x= isha();
    return x/100;
}

int radhika(){
    cout<<"hi radhika"<<endl;
    isha();
    return 40;
}
int main()
{
    int a=5;
    cout<<a*a<<endl;
    cout<<radhika();
}