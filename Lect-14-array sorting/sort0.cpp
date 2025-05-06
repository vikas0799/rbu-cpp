#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int round = 0; round < n; round++)
    {        
        //operation to each time max value
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap arr[j], arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<arr[n-2]<<endl;   //second largest element in sorted array

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}