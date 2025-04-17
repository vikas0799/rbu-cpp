#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    // cin>>a>>b>>c;
    cin>>a;
    cin>>b;
    cin>>c;
    // if(a>b&&a>c){
    //     cout<<"a is greatest";
    // }
    // if(b>a||b>c){
    //     cout<<"b is grearest"<<endl;
    // }
    // if(c>a&&c>b){
    //     cout<<"c is greatest"<<endl;
    // }
  if(a>b){
      if(b>c){
        cout<<"a is greatest";
      }
  }
  else{
    if(a>c){
        cout<<"b is greatest ";
    }
    else{
        cout<<"c is grratest";
    }
  }
  int d;cin>>d;
int ans=max(d,max(a,max(b,c)));

}