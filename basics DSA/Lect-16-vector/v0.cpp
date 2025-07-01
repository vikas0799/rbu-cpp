#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>mayank;
    mayank.push_back(20);
    mayank.push_back(30);
    mayank.push_back(-89);

    for(int i=0;i<mayank.size();i++)
    {
        cout<<mayank[i]<<" ";
    }
    mayank.push_back(44);
    cout<<endl;
    for(int i=0;i<mayank.size();i++)
    {
        cout<<mayank[i]<<" ";
    }
    cout<<endl<<mayank.size();

}