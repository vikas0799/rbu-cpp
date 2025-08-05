#include<bits/stdc++.h>
using namespace std;
class Student{
    
    string name="mayank";
    int roll=95;

    public:
    Student(){
       cout<<"default constructor is called"<<endl;
    }
     Student(int a){
       cout<<a<<endl;
    }
    Student(int a,int b){
       cout<<a+b<<endl;
    }
    Student (int a, string b){
        cout<<a<<b<<endl;
    }
    Student(int a,int b,int c){
       cout<<a+b+c<<endl;
    }

    


    void display(){
        cout<<name<<" "<<roll<<endl;
    }
};

int main()
{
    // Student Mayank;
    //  Mayank.display();
    // cout<<Mayank.name;
    // Student shivam();
    Student arjun;
    Student shivam=arjun;
    // arjun.Student();
}