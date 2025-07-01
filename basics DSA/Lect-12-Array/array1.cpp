#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    // int x=90;
    // float y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;
// max 
    float arr[4]={-1.01,-2.038,-10,2.09};
    int index=0;
    float ans=INT_MIN;
    for(int i=0;i<4;i++)
    {
        if(arr[i]<ans){
   //skip
        }
        else{
            //ans is small
            ans=arr[i];
            index=i;
        }
    }
    cout<<ans<<" "<<index;

}