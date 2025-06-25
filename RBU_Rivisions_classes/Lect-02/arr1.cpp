#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

   int marking[n];
    for(int i=0;i<n;i++)
    {
        cin>>marking[i];
    }
    
    sort(marking,marking+n);

    //linear search
    for(int i=0;i<n;i++)
    {
        cout<<3*marking[i]<<" ";
    }
}