#include <iostream>
using namespace std;
void sorting(int a[], int n){
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
   }
   
}
int main(){
   // int n;
   // int a[n];
    //cout<<" number of element in array "<<endl;
   // cin>> n;
    //cout<<" enter elements of array : "<<endl;
   // for(int i=0;i<n;i++){
    //    cin>>a[i];
   // }
   int a[]= {4,3,6,2,8,9};
   int n= sizeof(a)/sizeof(a[0]);
    sorting(a,n);
    cout<<" your sorted array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}