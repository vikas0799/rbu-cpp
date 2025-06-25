#include<bits/stdc++.h>
using namespace std;
int main()
{
    int height[6]={2,5,8,12,15,20};
    int capacity=13;

    //linear search
    int count=0;
    for(int i=0;i<6;i++)
    {
        if(height[i]>=capacity){
            count++;
        }
    }
    cout<<count<<endl;
}