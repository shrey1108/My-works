#include <bits/stdc++.h>
using namespace std;
int add(vector<int>& arr){
    int sum =0;
    for(int i=0;i<arr.size();i++){
        sum = arr[i]+ sum;
        
    }
    return sum;
}
int degitsum(vector<int>& arr){
   int sum=0;
   int a = 0;
    for(int i=0;i<arr.size();i++){
        int sum2=0;
         a = arr[i];
    
     if(a>10){
        while(a>0){
     sum2= a%10 + sum2;
     a=a/10;
     }
     sum= sum2+sum;
     }
     else{
     sum= a+sum;
     
     
     }
    }
    return sum;
}

int main(){
    vector<int> arr ={1,40,20,30,40};
  cout<< add(arr)<<endl;
  cout<< degitsum(arr);
}