#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is greater" << endl;
    }
    else
    { 
        // a==b, b<a
        if (a < b)
        {
            cout << "b is greater" << endl;
        }
        else
        {
            cout<<"a is equal to b"<<endl;
        }
    }
}