//prime number
#include <iostream>
using namespace std;
int main()
{
    int number;
    int b=0;
    cout<<"enter your number";
    cin>>number;
    for(int i=2 ; i<number;i++){
        while(number%i==0){
            b=b+1;
        }
        
    }
    if (b=0){
        cout<<b;
    }else{
        cout<<b;
    }
    
    return 0;
}


     
