#include<bits/stdc++.h>
using namespace std;
// struct Student{
//     int roll ;
//     string name;
//     string address="UK";
// };
class Student{
    public:
    int roll ;
    string name;
    string address="UK";
};
int main()
{
      
    // Student mayank;
    // mayank.name="mayank sharma";
    // mayank.roll=95;
    // cout<<mayank.roll;
    // cout<<mayank.address;


    Student isha;
    Student mayank;

    Student *ptr;
    Student *mptr;

    ptr=&isha;
    mptr=&mayank;

    cout<<&isha<<ptr<<endl;
    cout<<&mayank<<mptr<<endl;

//    cout<<(isha);     
    
}