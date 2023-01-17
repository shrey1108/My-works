//reverse number
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter number";
    cin>>num1;
    int  sum =0;
    while(num1>0){
        sum= sum+(num1%10);
        num1= num1/10;
        sum = sum*10;
    }
    cout<< sum;
    
    
}