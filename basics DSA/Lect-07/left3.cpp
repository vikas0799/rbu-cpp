#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(j>=i){
                cout<<j<<" "; //single space
            }
            else{
                cout<<"  "; //single space
            }
        }
        cout << endl;
    }
}