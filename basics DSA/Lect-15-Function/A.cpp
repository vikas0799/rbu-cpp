#include<iostream>
using namespace std;

float squre(float x){
    cout<<"inside squre function"<<endl;
    float ans=x*x;
    // float ans=x+x;
    cout<<ans<<endl;
    return ans;
}

void greet(){
    int ans=8;
    cout<<ans+ans<<endl;
    cout<<"thanks for accound opening"<<endl;
}
int main()
{
     int ans=squre(1.2);
     cout<<ans<<endl;

    // cout<<"I am main function"<<endl;
    // int k=squre(1.1);
    // cout<<k;
    // k=squre(1.5);
    // cout<<k;
    greet();
    // return 0;
}