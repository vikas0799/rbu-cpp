#include <iostream>
using namespace std;
int main()
{
    // int n=4564;
    // n=n/10;
    // cout<<n;
    // n=n%10;
    // cout<<n;

    int n = 35612;
    while (n > 0)
    {
        cout << n << " ";
        n = n / 10;
    }
}