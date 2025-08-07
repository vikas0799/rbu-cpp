// C++ program to demonstrate inheritance
#include <iostream>
using namespace std;

// base class
class Animal
{
public:
    int a = 90;
    string color="black";
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep(){
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : private Animal
{
    private:
    //  int a = 90;
    // string color="black";
    // void eat() {
    //     cout << "I can eat!" << endl;
    // }
    // void sleep(){
    //     cout << "I can sleep!" << endl;
    // }

public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
    void getdata(){
        cout<<this->color<<endl;
    }
};

int main()
{
    Dog tommy;
    // cout<<tommy.color<<endl;
    tommy.getdata();

}