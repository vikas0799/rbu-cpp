// #include<bits/stdc++.h>
// using namespace std;
// void solve(int arr[],int n){
//     //referne address call by refernce
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[3]={23,66,34};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     solve(arr,n);
// }




// #include<bits/stdc++.h>
// using namespace std;
// void solve(vector<int>v,int n){
//     //referne address call by value, copy banegi
//     v[0]=9000;
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }
// }

// void solve(vector<int>&v,int n){
//     //referne address call by reference, single instance create hoga 
//     v[0]=8000;
//     for(int i=0;i<n;i++){
//         cout<<v[i];
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(23);
//     v.push_back(44);
//     v.push_back(100);

//     int n=v.size();
//     solve(v,n);
// }

#include<bits/stdc++.h>
using namespace std;


// void solve(string str,int n){
//     //copy banegi
//     str[1]='A';
//     cout<<str<<endl;
// }

void solve(string &str,int n){
    //copy banegi
    str[1]='A';
    cout<<str<<endl;
}
int main(){
    string str="coding";
    int n=str.size();
    solve(str,n);
    cout<<str<<endl;
}