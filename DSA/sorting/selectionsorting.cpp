#include <iostream>
using namespace std;
int sorting(int a[],int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
          swap(a[j],a[j+1]);
        }
    }
   }
}


int main(){
    int a[] ={ 5,3,6,7,2,4,9};
    int n= sizeof(a)/sizeof(a[0]);
    cout<<"your sorted aray is : "<<endl;
    sorting(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
