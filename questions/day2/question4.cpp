#include <iostream>
using namespace std;
int find(int*arr,int n){
    int b = sizeof(arr)/sizeof(arr[0]);
    int c=0;
   for(int i=b;i>=0;i--){
        if(arr[i]==n){
            c=i;
            break;
        }

    }
    return c;
}
int main()
{
    int arr[] = {1,2,3,3,4,6,6};
    
    int n;
    
    cout<<"enter your number";
    cin>>n;
    int c = find(arr,n);
    cout<<c;

    }

