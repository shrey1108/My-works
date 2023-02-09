#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
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
}
void display(node *&head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL";
}
void remove(node *&head,int val){
    node *temp=head;
    while(temp->next->data!=val&&temp!=NULL){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"value not found";
        return;
    }
    else{
         node *n=temp->next;
        temp->next=temp->next->next;
    }
}
void lenght(node *head){
    node *temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    cout<<"length is"<<c;
}
node* reverse(node *&head){
//     node *pre=NULL;
//     node *temp=head;
//     node *curr;
//     while(temp->next=NULL){
//      temp=temp->next;
//     }
//     node *n= new node(temp->data);
//     remove(head,temp->data);
//     if(curr==NULL) curr=n;
//     while(curr->next!=NULL){
//         curr=curr->next;
//     }
//     curr->next=n;
//     reverse(head);
//    return curr;
node *pre = NULL;
node * curr= head;
node *next;
while(curr!=NULL){
    next= curr->next;
    curr->next=pre;

    pre=curr;
    curr=next;
}
return pre;
}
int main(){
 node *head=NULL;
 insert(head,1);
 insert(head,2);
 insert(head,3);
 insert(head,4);
 insert(head,5);
 display(head);
  remove(head,5);
  cout<<endl;
 display(head);
cout<<endl;
lenght(head);
node *curr=reverse(head);
display(curr);
}