#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            // cout<<j<<" ";
            // cout<<"* ";
            if (j % 2 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "# ";
            }
        }
        cout << endl;
    }
}