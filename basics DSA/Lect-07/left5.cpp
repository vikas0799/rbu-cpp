#include<iostream>
using namespace std;
int main()
{
    // char vikas='A';
    // // cout<<vikas;
    // vikas++;
    // cout<<vikas;
     int n=10;
     char nolan='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<nolan<<" ";
            nolan++;
        }
        cout<<endl;
    }
}