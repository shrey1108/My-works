#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c=0;
    
    cout <<"enter your number";
    cin>>a;
    int y= a;
    while(y>0){
         b= y%10;
          y=y/10;
         if (b!=0 && a%b==0){
          c=c+1;
         }
    }
    cout<<c;
}