#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data=0;
    Node *left=NULL;
    Node* right=NULL;
    Node(int val){
        this->data=val;
    }
};

void traverse(Node* root){
      if(root==NULL)
      return;
      
    // cout<<root->data<<" ";  //preorder
    traverse(root->left);
    // cout<<root->data<<" ";   //inorder
    traverse(root->right);
    // cout<<root->data<<" ";   //postorder
}

int main()
{
//   Node* root=new Node(10);
//   cout<<root->left<<" "<<root->right<<" "<<root->data<<endl;

// Node* rbu=new Node(10);
// Node* arjun=new Node(9);
// Node* shivam=new Node(18);
// rbu->left=shivam;
// rbu->right=arjun;

// cout<<rbu->right->data;


       Node* rbu=new Node(10);
       rbu->right=  new Node(9);
       rbu->left= new Node(18);
      rbu->right->right= new Node(100);
       rbu->right->left= new Node(200);

    //    dfs->preoprder, inorder, postorder
    traverse(rbu);

}