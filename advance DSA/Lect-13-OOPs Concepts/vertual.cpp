#include<bits/stdc++.h>
using namespace std;
class Country {
public:
   virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class State : public Country {
public:
   State(){

   }
    void show() {
        cout << "Derived class show()" << endl;
    }
};

int main()
{
     State punjab;
     punjab.show();

     State* hariyana=new State();
     hariyana->show();

     Country india;
     india.show();
}