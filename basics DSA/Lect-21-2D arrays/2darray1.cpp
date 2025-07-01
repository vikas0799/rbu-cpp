#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int matrix[2][3] = {{1, 3, 0}, {-1, 5, 9}};
    int n,m; cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

  cout<<"traversing 2d arrays"<<endl;
    //printing each element of 2d array

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }
}