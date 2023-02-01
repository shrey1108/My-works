#include <iostream>
using namespace std;
int main(){
    for(int k=0;k<5;k++){
    for(int i=k;i<5;i++){
    for(int j=k;j<i;j++){
        cout<<j<<",";
    }
    cout<<endl;
    }
    }
}