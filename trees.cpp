#include <bits/stdtr1c++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int val){
        data = val;
        left=NULL;
        right= NULL;
    }
};
int insert (node *root){
    int l=0;
    
     if(root == NULL){
        return;
    }
  cout<<root->data;
   l=l+1;
 insert(root->left);
 insert(root->right);
return l;
}
int main(){
 node* root= new node(1);
 root->left=new node(2);
 root->right=new node(3);
 root->left->left=new node(4);
 root->right->right=new node(5);
 cout<<insert(root);
 
}