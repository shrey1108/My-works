#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter number 1"<<endl;
    cin>>a;
    cout<<"enter number 2"<<endl;
    cin>>b;
    cout <<"enter number 3"<<endl;
    cin>>c;
    cout <<"enter number 4"<<endl;
    cin>>d;
    if (a>b){
        if (a>c){
            if(a>d){
                cout<<"greater number is "<<a;
                
            }
        }
    }
    if(b>c){
            if(b>d){
             cout<<"greater number is "<<b;
            
            }
     }
     if(c>d){
         cout<<"greater number is "<<c;
         
      }
    if(d>a){
       
                        cout<<"greater number is "<<d;
                    
     }
            
}
    