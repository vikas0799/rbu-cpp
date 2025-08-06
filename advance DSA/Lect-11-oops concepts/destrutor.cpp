#include <bits/stdc++.h>
using namespace std;
class Demo
{
public:
    string name = "vikas patel";

    Demo()
    {
        cout << "Constructor called\n";
    }
    ~Demo()
    {
        cout << "Destructor called\n";
    }
};

int main()
{
    Demo ankita;
    cout << ankita.name << endl;
    int a = 90;
    cout << a << endl;
    Demo* shivam = new Demo();
    delete shivam;

    // cout<<shivam->name<<endl;
    int x=90;
    cout<<x<<endl;
}
