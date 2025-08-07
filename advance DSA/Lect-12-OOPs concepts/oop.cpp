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
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    // Create object of the Dog class
    Dog charlie;

    // Calling members of the base class
    charlie.eat();
    charlie.sleep();

    // Calling member of the derived class
    charlie.bark();

    cout << charlie.a << charlie.color<<endl;
    

    return 0;
}