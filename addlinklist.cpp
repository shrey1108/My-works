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
void insert(node *&head,int val){
node *n=new node(val);
if (head==NULL){
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
        cout<<temp->data<<"<";
        temp=temp->next;
    }
    cout<<"NULL";
}
node * reverse(node *&head){
    node *pre=NULL;
    node *curr=head;
    node *next=NULL;
    while(curr!=NULL){
     next=curr->next;
     curr->next=pre;

     pre=curr;
     curr=next;
    }
    return pre;
}
node * linkcreate(int val){
    node *n=NULL;
    while(val>0){
     insert(n,val%10);
     val=val/10;
    }
     node *n2= reverse(n);
    return n2;
}
node * sumofreversenode(node *&num1,node *&num2){
    node *temp=num1;
    int a=0;
    int b=0;
    while(temp!=NULL){
        a=(a*10)+temp->data;
        temp=temp->next;
    }
    node *temp1=num2;
    while(temp1!=NULL){
        b=(b*10)+temp1->data;
        temp1=temp1->next;
    }
    int c=a+b;
   node *ans= linkcreate(c);
   return ans;

}
int main(){
// node *l1=NULL;
// insert(l1,1);
// insert(l1,2);
// insert(l1,3);
// display(l1);
// cout<<endl;
// node *l2=NULL;
// insert(l2,1);
// insert(l2,2);
// insert(l2,3);
// display(l2);
// node *l3=reverse(l2);
// display(l3);
// cout<<endl;

 node *l4=linkcreate(123);
 display(l4);
node *num1=linkcreate(243);
node *num2=linkcreate(564);
node *ans=sumofreversenode(num1,num2);
display(ans);
}