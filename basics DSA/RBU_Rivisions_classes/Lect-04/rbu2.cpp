// #include<bits/stdc++.h>
// using namespace std;
// void solve(int x){
//     x=x+3;
//     cout<<x<<endl;
// }
// int main()
// {
//     int x=10;
//     solve(x);
//     x=x+9;
//     cout<<x<<endl;

// }


#include<bits/stdc++.h>
using namespace std;
void solve(int *ptr){
    *ptr=*ptr+3;
    cout<<*ptr<<endl;
}
int main()
{
    int x=10;
    solve(&x);
    x=x+9;
    cout<<x<<endl;

}