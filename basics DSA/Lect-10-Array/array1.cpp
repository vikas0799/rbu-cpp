#include<iostream>
using namespace std;
int main()
{
    //count negative and positive no..
    int n;
    cin>>n;

    int arr [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //data processing
    //linear search
    int positive=0;
    int negative=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0){
          positive++;
        }
        else{
            negative++;
        }
    }
    cout<<positive<<" "<<negative;
}