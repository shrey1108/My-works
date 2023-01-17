#include <iostream>
using namespace std;
int sumOf(int*arr, int a){
    int b = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<b;i++){
        if(arr[i]==a){
            continue;
        }else
        sum = sum+arr[i];
    }
    return sum;
}
int main(){
    int a;
    int sum=0;
    cout <<"enter number";
    cin>>a;
    int arr[]={1,2,3,2,5};
    int b = sumOf(arr,a);
    cout<<sum;
}