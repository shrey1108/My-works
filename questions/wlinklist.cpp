#include <iostream>
using namespace std;
class Node{
public :
int data;
Node *pre;
Node *next;
 Node (int val){
    pre = NULL;
    next= NULL;
    data = val;
 }
};
void insertAtail(Node *&head, int val){
    Node *n= new Node(val);
   Node *temp = head;
  while(temp->next != NULL){
    temp = temp ->next;
  }
  temp->next=n;
  n->pre= temp;
}
  
int main(){

}