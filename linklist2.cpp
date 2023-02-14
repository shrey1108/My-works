#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }

};
void remove(node*&head,int val){
    node *temp=head;
    node *temp1;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=temp->next->next;
    delete temp1;
}
void insert(node *&head,int val){
    node *n=new node(val);
    if(head==NULL){ 
    head=n;
    return;}
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}
void swap(node *&head){
    node * temp=head;
    node *temp1;
    while(temp!=NULL){
      temp1=temp;
      temp=temp->next;
      temp->next=temp1;
    }
    }
int main(){
    node *l1=NULL;
    insert(l1,1);
    insert(l1,2);
    insert(l1,3);
    insert(l1,4);
    insert(l1,5);
    display(l1);
    cout<<endl;
    remove(l1,3);
    display(l1);
    swap(l1);
    display(l1);
}