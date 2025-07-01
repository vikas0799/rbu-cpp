//call by value

// #include <iostream>
// using namespace std;
// int solve(int a){
//     a++;
//     a++;
//     cout<<a<<endl;
//     return a;
// }

// int main() {
// int a=5;
// int x=solve(a);
// cout<<a<<endl;
// }



//call by reference
#include <iostream>
using namespace std;
int solve(int *ptr){
   *ptr=*ptr+1;
   *ptr=*ptr+1;
    cout<<*ptr<<endl;
    return *ptr;
}

int main() {
int a=5;
int x=solve(&a);
cout<<a<<endl;
}