#include <iostream>
using namespace std;
long reverse(int a){
    int c=0;
    int rev=0;
    int s=a;
   int temp=0;
    if(s<0){
        c++;
        s=s*-1;
    }
    while(s>0){
        temp=s%10;
     rev=rev*10+temp;
     s=s/10;

    }
    if(c>0){
        rev= rev*-1;
    }
    return rev;
}
int main (){
    int a ;
    cout<<"enter your number"<<endl;
    cin>>a;
   int b= reverse(a);
    cout<<"your number is"<<b<<endl;
}