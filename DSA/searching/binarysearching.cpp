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
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<< a[i]<<" ";
    }
}
int binarysearching(int a[], int n,int b){
    int e= n-1;
    int s=0;
    while(s<=e){
          int mid= ((e+s)/2);
            
       
        if(a[mid]==b){
          return mid+1;
        }
        else
        if(a[mid]>b){
          
          e=mid-1;
          
        }
        else
        if(a[mid]<b){
            s=mid+1;
            
            
        }
    }
    return -1;
}

int main(){
    int a[] = {7,5,4,3,8,3,9,2};
    int n= sizeof(a)/sizeof(a[0]);
    int b;
    sorting(a,n);
    cout<<"your sorted array is "<<endl;
    print(a,n);
    cout<<endl;
    cout<<"enter the element you want to search: "<<endl;
    cin>> b;
   int c=  binarysearching(a,n,b); 
   if(c>-1){
cout<<"answer is : "<<c;
}else {
    cout<<" answer not found";
}
}
