#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,7,11,15};
    int target =9;
    //sum of all unique pair
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            // cout<<v[i]+v[j]<<" ";
            cnt++;
        }
        cout<<endl;
    }
    cout<<cnt;
}