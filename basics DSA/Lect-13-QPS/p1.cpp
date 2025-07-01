#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=n;j++)
        {
            if(j==n/2||i==n/2){
                cout<<"* ";
            }else{
                if(i==1&&j<=n&&j>=n/2){
                    cout<<"* ";
                }
                else{
                    if(i==n&&j<=n/2&&j>=0){
                        cout<<"* ";
                    }
                    else{
                        if(j==1&&i>=0&&i<=n/2){
                            cout<<"* ";
                        }
                        else{
                            if(j==10&&i<=n&&i>n/2){
                                cout<<"* ";
                            }
                            else{
                                cout<<"  ";

                            }
                        }
                    }
                    
                }
            }
           
            
        }
        cout<<endl;
    }
}