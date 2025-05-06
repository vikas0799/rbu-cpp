#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        char harsh='A';
        for(int j=1;j<=n;j++)
        {
            if(i+j>=n+1){
               cout<<harsh<<" ";
            }
            else{
                cout<<" ";
            }
            harsh++;
        }
        cout<<endl;
    }
}