//swap number without variable
#include <iostream>
using namespace std ;
int main(){
    int num1,num2;
    cout<<"enter number 1";
    cin>>num1;
    cout <<"enter number 2";
    cin >> num2;
    num1= num1 + num2;
    num2  = num1 - num2;
    num1  = num1 - num2;
    cout << num1 <<" " << num2;
}