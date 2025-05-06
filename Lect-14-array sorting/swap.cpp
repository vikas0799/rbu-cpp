#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //linear search  forward
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]*2 << " ";
    }

    cout<<endl;
     //linear search  backword
     for (int i = n-1; i >=0; i--)
     {
         cout << arr[i]*2 << " ";
     }
}
