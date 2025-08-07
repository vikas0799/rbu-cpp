// C++ program to demonstrate inheritance
#include <iostream>
using namespace std;
class Animal
{
    protected:
    int mayank=95;
    
    
};

// derived class
class Human : protected Animal
{
    string ankita="degree";
    protected:
    string isha="degree";
    public:
    void getdata(){
        cout<<this->mayank<<endl;
    }
    string harsh="fail";

};

int main()
{
//  Animal obj;
//  cout<<obj.shivam;   //not accessible

//  cout<<obj.mayank<<endl;  //not accessible

//  cout<<obj.color<<endl;
Human kharar;
kharar.getdata();

}