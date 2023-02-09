#include <iostream>
using namespace std;
class node{
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
node *adding(node *&l3,node *&l4){
    node *l5=NULL;
    int sum=0;
    int carry=0;
    while(l3!=NULL||l4!=NULL||carry!=0){
        int b=carry+ l3->data+l4->data;
        carry=b/10;
        if(b>=10) b=b%10;
        insert(l5,b);
        l3=l3->next;
        l4=l4->next;
    }
    return l5;
    
}
void display(node *&head){
    node *temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main(){
    node *l1=NULL;
    insert(l1,2);
    insert(l1,4);
    insert(l1,3);
    display(l1);
    node *l2=NULL;
    insert(l2,5);
    insert(l2,6);
    insert(l2,4); 
    display(l2);
    node *ans=adding(l1,l2);
    display(ans);
}