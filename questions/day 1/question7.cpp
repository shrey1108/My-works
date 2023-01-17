//square of
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter number";
    cin>>num1;
    cout<<"enter power";
    cin>>num2;
    int sum = num1;
    while(num2>1){
     sum= sum * num1;
     num2--;
    }
    cout<<sum;
    
    
    
}