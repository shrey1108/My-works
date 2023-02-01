#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    int b=0;
    
    cout<<"enter total element"<<endl;
    cin>>b;
    for(int j=0;j<b;j++){
        cout <<"enter number";
        cin>>n;
     int arr1[j]= n;
    }
   
    int a = sizeof(arr1)/sizeof(arr1[0]);
    sort(arr1,arr1+a);
    for(int i=0;i<a;i++){
    cout<<arr1[i];
}
}