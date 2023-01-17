#include <iostream>
using namespace std;
int main (){
    int arr[]= {1,2,2,3,4,4,4,5,6};
    int b;
    cout<<"enter number";
    cin>>b;
    int d =0;
    int c= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<c;i++){
        if(arr[i]==b){
            d=d+1;
        }

    }
cout<<d;
}