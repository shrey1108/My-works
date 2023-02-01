#include <bits/stdc++.h>
using namespace std;
int main(){
    int  arr1[]={3,2,6,5,3,1};
    
    int a= sizeof(arr1)/sizeof(arr1[0]);
    int arr2;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if (arr1[j]<arr1[i]){
                arr2=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=arr2;
                
            }
            
            
        }
    }
    for(int k=0;k<a;k++){
        cout<<arr1[k]<<endl;
    }
}