// #include<bits/stdc++.h>
// using namespace std;
// void PD(int n){
//     if(n==0)
//     return ;
//     else{
//        cout<<n<<" ";
//        PD(n-1);
//     }
// }
// int main()
// {
//     int n=5;
//     PD(n);
// }

#include<bits/stdc++.h>
using namespace std;
void PD(int n){
    if(n==6)
    return ;
    else{
       cout<<n<<" ";
       PD(n+1);
       cout<<endl;
       cout<<n<<" ";
    }
}
int main()
{
    int n=1;
    PD(n);
}