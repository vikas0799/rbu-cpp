#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={3,8,10,10,10,22};
     int key=9;

     //linear search
     //binary search

     //binary search ka STL use kar lo
     bool flag=binary_search(arr,arr+6,key);
     cout<<flag<<endl;
}