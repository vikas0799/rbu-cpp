#include<bits/stdc++.h>
using namespace std;
class Teacher{
    private:
    string name;
    int E_id;
    int salary;

    public:
     void setdata(string name, int E_id, int salary ){
        this->name=name;
        this->E_id=E_id;
        this->salary=salary;
    }
     void getdata( ){
       cout<<this->name<<" "<<this->E_id<<" "<<this->salary<<endl;
    }

};

class Student{
    private:
    string name;
    int roll;
    int age;

    public:
    void dance(){
        cout<<" dancing activity"<<endl;
    };
    void eating(){
        cout<<"food is very bad in hostel"<<endl;
    }
    void setdata(string name, int roll, int age ){
        this->name=name;
        this->age=age;
        this->roll=roll;
    }
     void getdata( ){
        cout<<this->name<<" "<<this->roll<<" "<<this->age<<endl;
    }
    void sizename(){
        cout<<sizeof(this->name)<<endl;
    }
     void sizeage(){
        cout<<sizeof(this->age)<<endl;
    }
     void sizeroll(){
        cout<<sizeof(this->roll)<<endl;
    }
};
int main()
{
    // Student arjun;
    // arjun.name="Arjun Khattar",
    // arjun.roll=41,
    // arjun.age=20;
    
    // cout<<arjun.age;
    // arjun.setdata("arjun khattar",41,20);
    // arjun.getdata();

    // Student mayank;
    //  mayank.setdata("mayank pandayt",94,22);
    // mayank.getdata();

    // Student isha;
    //  isha.setdata("isha ansari",198,23);
    // isha.getdata();

    Student harsh;
    cout<<sizeof(harsh)<<endl;
    harsh.sizeage();


}