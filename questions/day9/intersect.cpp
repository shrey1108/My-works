#include <iostream>
using namespace std;
class Node{
    public :
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAttail( Node *&head, int val){
   Node *n=new Node(val);
   if(head==NULL){
    head=n;
   } 
   Node *temp= head;
   if(temp->next!=NULL){
      temp=temp->next;
   }
   temp->next=n;
}
int length(Node *&head){
    int l=0;
    Node *temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int intersection(Node *head1, Node *head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    Node *ptr1;
    Node *ptr2;

    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

int main(){
    Node *head= NULL;
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,7);
    display(head);
}