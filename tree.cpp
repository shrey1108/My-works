#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;

    node(int val){
        data=val;
        left= NULL;
        right=NULL;
    }
};
int postorder(node *root){
    // if(root==NULL){
    // return -1;
    // }
     return root->data;
    postorder(root->left);
    postorder(root->right);
   
    
}

int main()
{
   node *root= new node(1);
   root->left=new node(2);
   root->right=new node(3);
//    root->right->left= new node(4);
//    root->right->right=new node(5);
//    root->left->right= new node(6);
//    root->left->right=new node(7);
//    root->left->left->left=new node(8);
//    root->left->left->right=new node(9);
//    root->left->right->left=new node(10);
//    root->left->right->right=new node(11);
//    root->right->left->left=new node(12);
//    root->left->right->right=new node(13);
//    root->right->left->left=new node(14);
//    root->right->left->right=new node(15);
    postorder(root);
}
