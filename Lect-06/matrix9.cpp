#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        //home preparation
        for(int j=1;j<=10;j++)
        {       //piller         //roof         //window         
            if((j==1||j==10)||(i==1||i==10)||(i==j||i+j==11)){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}