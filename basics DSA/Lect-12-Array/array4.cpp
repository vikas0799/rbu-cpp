#include <iostream>
using namespace std;
int main()
{
    char arr[5] = {'V', 'i', 'K', 'a', 's'};
    for (int i = 0; i < 5; i++)
    {
        // cout<<arr[i]<<endl;
        // int ans=arr[i];
        // cout<<ans<<endl;

        if (arr[i] >= 97)
        {
            arr[i] = arr[i] - 32;
        }
        else
        {
            arr[i] = arr[i] + 32;
        }
        
    }

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    cout << arr << " ";
}

// for(int i=0;i<5;i++){
//     int a = arr[i];
//     cout << arr[i] << ">" ;

//     if ( a > 96){
//         a=a-32;
//         char j = a;
//         cout << j << " ";

//     }
//     else {
//         a=a+32;
//         char k = a;
//         cout << k << " ";
//     }
// }
