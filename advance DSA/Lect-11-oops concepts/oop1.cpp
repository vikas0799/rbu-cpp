#include<bits/stdc++.h>
using namespace std;
class Student{
    string name="ranjane";
    int roll=000;

    public:
    Student(){
       cout<<"default constructor is called"<<endl;
    }
    // Student(string name, int roll){
    //     this->name=name;
    //     this->roll=roll;
    //     roll++;
    //     cout<<this->roll<<roll<<endl;
    // }

    Student(string name,int roll) : name(name),roll(roll)
     { 
        // Initializes x using initializer list
        //.. 
        cout<<roll<<name;
        cout<<this->name<<this->roll;
    }

    void display(){
        cout<<name<<" "<<roll<<endl;
    }
};
int main()
{
    Student vikas("vikas patel",56);
}