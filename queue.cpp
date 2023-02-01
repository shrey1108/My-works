#include <iostream>
using namespace std;
#define n 100;
class queue{
    int first;
    int body;
     int*arr;
    public:
    queue(){
      first=-1;
      body =-1;
     arr =new int[100];
    }
   void push(int val){
    if(body<100) {
        body++;
        first=0;
    arr[body]=val;}
    else "queue over flow";
   } 
   void pop(){
    if(first!=-1 && first < body){
        first++;
    }
    else{
        cout<<"queue is empty";
        first =-1;
        body =-1;
    }
   }
   int peek(){
    if(first>-1) return arr[first];
    else return -1;
   }
   bool empty(){
    if(body==-1&& first==-1){
        return true;
    }
    return false;
     }
};
int main(){
  queue q ;
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  cout<<q.peek()<<"  ";
  q.pop();
   cout<<q.peek()<<"  ";q.pop();
   q.pop();
    q.pop();
   q.pop();
   q.pop();
   cout<<q.peek()<<"  ";
   cout<<q.empty();





}