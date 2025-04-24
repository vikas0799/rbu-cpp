#include <iostream>
using namespace std;
int main()
{
   int n=10;
   int num1=1;
   int num2=2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
           if(i%2==1){
            cout<<num1<<" ";
            num1=num1+2;
           }
           else{
            cout<<num2<<" ";
            num2=num2+2;
           }
        }
        
        cout << endl;
    }
}