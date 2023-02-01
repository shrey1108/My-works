#include <iostream>
using namespace std;
int main(){
    int a=4;
    
    int *p=&a;
    cout<<p<<endl;
    cout<<a<<endl;
    *p=10;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<a<<endl;
    cout<<*&a<<endl;
    cout<<&p<<endl;
}