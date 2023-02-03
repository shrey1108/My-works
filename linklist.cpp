#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next=NULL;
    }
};
void insertAttail(node *&head,int val){
    node *n=new node(val);
    if(head==NULL){
     head=n;
     return;
    }
    node *temp= head;
    while(temp->next!=NULL){
        temp=temp->next;    
    }
    temp->next=n;
    // cout<<temp->data<<">";
}
void insertAthead(node *&head,int val){
   node *n = new node(val);
   n->next=head;
   head=n;
}
void display(node *&head){
  node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"<";
    temp=temp->next;
  }
  cout<<"NULL";
}
int search(node *&head,int val){
    node* temp=head;
    int p=0;
    while(temp!=NULL){
        if(temp->data!=val){
         p++;
        }
    }
}
int main(){
    node *head=NULL;
   insertAttail(head,2);
    insertAttail(head,3);
     insertAttail(head,4);
      insertAttail(head,5);
 display(head);
 cout<<endl;
 insertAthead(head,9);
 display(head);

}