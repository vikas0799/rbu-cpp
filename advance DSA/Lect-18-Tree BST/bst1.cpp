#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data=0;
    Node * left=NULL;
    Node * right=NULL;
    Node(int val){
        data=val;
    }
};

Node * insert(Node * root, int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
bool solve(Node * root,int key){
    static bool x=false;
    if(root==NULL){
        return x;
    }
    if(root->data==key){
        x=true;
    }
    solve(root->left,key);
    cout<<root->data<<" ";
    solve(root->right,key);

    return x;
}

int main()
{
    Node * root=NULL;
   root=insert(root,56);
   insert(root,34);
   insert(root,3);
   insert(root,38);

    
  int key =56;   //brute force ways
bool flag= solve(root, key);
  cout<<flag;
}