#include <iostream>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<< a[i];
    }
}
int searching(int a[],int n, int b){
  int pos=-1;
    for(int i=0;i<n;i++){
        if(a[i]==b){
            pos=i;
        }
    }
    if(pos==-1){
        return -1;
    }
    else {
  return pos;
    }

}
int main(){
    int a[] {8,3,4,5,3,9,0};
    int n= sizeof(a)/sizeof(a[0]);
    int b;
    cout<<"your array is :";
    print(a,n);
    cout<<" enter element you are searching : "<< endl;
    cin>>b;
   int pos= searching(a,n,b);
   if(pos>-1){
    print(a,n);
    cout<<" element is at "<<pos+1<< " position";
   }
   else{
    cout<<"element not found  ";
   }
}