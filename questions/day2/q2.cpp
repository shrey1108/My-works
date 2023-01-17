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
    if (a>b && a>c){
        if(a>d){
            cout<<" greatest number is "<<a;
        }
    }
    else
     if (b>c && b>d)
    {
        cout<<"greatest number is "<<b;
    }
    else
     if (c>d){
        cout<<"greatest number is "<<c;
    }
    else 
    {

    cout <<" greatest number is "<<d;
        }
    }

    
