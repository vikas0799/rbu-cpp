#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    int k=2;
     for(int i=0;i<n;i++)
     cout<<i<<" ";

     cout<<endl;
    //right shift
    for(int i=0;i<n;i++){
        cout<<(i+k)%n<<" ";
    }
    cout<<endl;

     //left shift
    for(int i=0;i<n;i++){
        // cout<<(i-k)%n<<" ";
        int x=(i-k)%n;
        cout<<x<<" ";
    }
    cout<<endl;
}