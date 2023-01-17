#include <iostream>
using namespace std;
int main(){
    int  num1,num2;
    
    cout<<"enter number";
    cin>>num1;
    cout<<"enter power you want";
    cin>>num2;
    int num=num1;
    while(num2>1){
        num=num*num1;
        num2--;
    }
    cout<<"value is " <<num;
}
