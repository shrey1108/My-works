#include <iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node (int val){
     data=val;
     next=NULL;
    }
};
void link (node *&head,int val){
    node * n=new node (val);
    if(head== NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node * create (int val){
    int b=0;
    node *l1=NULL;
    while(val>0){
        b=val%10;
        val=val/10;
        link(l1,b);
    }
    return l1;
}
void display(node *head){
    node * temp=head;
    while(temp!=NULL){
         cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
node * arrenge(node *&head,node *&head2){
  node *
}
int main(){
    node *l1=create(123);
    display (l1);
    cout<<endl;
    node *l2=create(124);
    arrenge(l1,l2);

}