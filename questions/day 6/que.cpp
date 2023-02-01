#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int val){
        data=val;
        next =NULL;

    }
};
void insertAttail( node *&head,int val){
    node *n= new node(val);
    if (head==NULL){
        head=n;
        // return ;
    }
    node *temp= head;
    if(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next=n;

}
void insertAthead(node *&head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;
}
void display(node *head){
    node *temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void deleteAt(node *&head,int val){
    node *pre;
    node *next;
    node * temp =head;
    while(temp->next!=NULL){
        if(temp->data=val){
            temp->next=temp->next->next;
        }
    }
}
int main(){
    node *head=NULL;
    insertAttail(head,2);
    insertAttail(head,6);
    insertAttail(head,5);
    display(head);
    insertAthead(head,8);
    display(head);
}