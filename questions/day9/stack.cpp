#include<iostream>
using  namespace std;
#define n 100;
class stack{
    int *arr;
    int top;
    public:
    stack(){
     arr= new int[100];
     top=-1;

    }
    void push(int val){
        if(top==6)
        {
            cout<<"stack over follow ";
            return;
        }
        top++;
         arr[top]=val;
    }
    void pop(){
        top--;
    }
    void popall(){
        top=-1;
    }
    void display(){
        if(top==-1){
            cout<<"it is empty stack ";
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
            
        }
    }

};

int main(){
  stack st;
  st.push(4);
  st.push(7);
  st.push(6);
  st.push(8);
  st.push(9);
  st.push(10);
  st.push(7);
  st.push(8);
  st.display();
  cout<<endl;
  st.pop();
  st.display();
  cout<<endl;
//   st.popall();
//   st.display();
stack t;
t.push(3);
t.push(4);
t.display();
}