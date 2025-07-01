#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    if(x>y){
        cout<<"x is greater than y";
    }
    else{
        // cout<<"y is greate or equal to x";
        if(x==y){
            cout<<"x is equal to y";
        }
        else{
        cout<<"y is greater than x";
        }
    }
}