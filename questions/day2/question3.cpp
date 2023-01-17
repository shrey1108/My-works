#include <iostream>
using namespace std;
int find(int arr[],int n){
    int a =-1;
    int b= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i< b;i++){
        if(arr[i]==n){
            a= i;
            break;
        }else {
            a=-1;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,2,5,6,7,8,11};
    int n;
    int b= sizeof(arr)/sizeof(arr[0]);
    int c=0;
    cout<<"enter number";
    cin>>n;
    for( int i=0;i<b;i++){
        int d=arr[i];
        if(d==n){
             c=i;
             break;
        }
        

    }
    if(c>0){
    cout<<"position is"<<c;
    }
    else{cout<<"not found";
    }
    

}

