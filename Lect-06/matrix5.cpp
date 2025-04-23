#include<iostream>
using namespace std;
int main()
{
    int a=100;
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
           cout<<a<<" ";
           a--;
        }
    }
}