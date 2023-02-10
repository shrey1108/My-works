#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *pre;
    node *next;
    node (int val){
        data=val;
        pre=NULL;
        next=NULL;
    }
};
void insert(node *&head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->pre=temp;
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void remove(node *&head,int val){
    node *temp=head;
    while(temp->data!=val){
        temp=temp->next;
    }
    temp->pre->next=temp->next;
    // if(temp->next!=NULL){
    //     temp->next->pre=temp->pre;
    // }
    delete temp;
}
int main(){
  node *head=NULL;
  insert(head,1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  display(head);
  remove(head,2);
  display(head);
}