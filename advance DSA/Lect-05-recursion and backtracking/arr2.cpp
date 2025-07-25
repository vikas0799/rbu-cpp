#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int n, int index){
     //base condition
     if(index==n-1){
        return true;
     }
    if(arr[index]>arr[index+1])
    return false;
     
    solve(arr,n,index+1);
}
int main()
{
    int arr[5]={23,54,78,86,100};
    int n=5;
    int index=0;
   cout<< solve(arr,n,index);

}