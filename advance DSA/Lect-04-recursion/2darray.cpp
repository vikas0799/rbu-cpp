#include <bits/stdc++.h>
using namespace std;
void solve(int arr[][3])
{
    arr[0][0] = 100;
    cout << arr[0][0] << endl;
}
int main()
{
    int arr[4][3] = {{1, 4, 3},
                     {2, 4, 3},
                     {3, 22, 44},
                     {33, 77, 55}
                    };
    solve(arr);
    cout << arr[0][0] << endl;

}