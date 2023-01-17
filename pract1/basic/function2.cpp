#include <iostream>
using namespace std;
int square(int x){
    int a = x*x;
    
    return a;
}
int main(){
    int x;
    cout<<"enter number";
    cin>>x;
    
    cout<<square(x);
}