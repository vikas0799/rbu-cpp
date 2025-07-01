#include <iostream>
using namespace std;
int main()
{
    for (int n = 1; n <= 100; n++)
    {
        int a = 0;
        if (n <= 1)
        {
            // cout << n<< "n is not a valid no" << endl;
        }
        else
        {
            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    // cout << n<<"n is not a prime" << endl;
                    a = 1;
                    break;
                }
                // else{  //wrong method
                //     cout<<"n is prime"<<endl;
                // }
            }
            if (a == 0)
            { // i divide nahi kar paya a=1 nahi ho paya
                // cout <<n<< "n is prime "  << endl;
                cout<<n<<endl;
            }
        }
    }
}