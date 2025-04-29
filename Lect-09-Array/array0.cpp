#include <iostream>
using namespace std;
int main()
{
    // data storing
    int n;
    cin >> n;
    int harsh[n];

    for (int i = 0; i < n; i++)
    {
        cin >> harsh[i];
    }

    // data processing to find results
    for (int i = 0; i < n; i++)
    {
        //    cout<<harsh[i]*2<<" ";
        if (harsh[i] % 2 == 0)
        {
            // even element
            cout << 0 << " ";
        }
        else
        {
            // odd element
            cout << 1 << " ";
        }
    }
}