#include<iostream>
using namespace std;
int main()
{
    // int n=10;
    // for(int i=1;i<=n;i++)
    // {
    //    for(int j=1;j<=n;j++)
    //    {
    //     if(i>=j){
    //         cout<<"* ";
    //     }
    //     else{
    //         cout<<" ";
    //     }
    //    }
    //    cout<<endl;
    // }

    int n,m; 
    cin>>n>>m;
    int num=1;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=m;j++)
       {
        cout<<num<<" ";
        num++;
       }
       cout<<endl;
    }

}