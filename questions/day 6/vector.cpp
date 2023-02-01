#include <bits/stdc++.h>
#include <vector>
using namespace std;
int print(vector<int> vector){
    cout<<"vector is ";
    for(int i=0;i<vector.size();i++){
        cout<< vector.at(i)<<" ";
    }
    cout<<endl;
}
int maximum(vector<int> vector1){
    int max ;
 for(int i=0;i<vector1.size();i++){
     for (int j=0;j<vector1.size();j++){
        max= vector1.at(i);
    if(vector1.at(i)>vector1.at(j)){
      if(vector1.at(i)>max){
      max = vector1.at(i);
     } 
    }
   }
 }
 cout<<" maximum is " <<max<<endl;

}
int minimum(vector<int> vector1){
    int min;
 for(int i=0;i<vector1.size();i++){
    for (int j=i;j<vector1.size();j++){
    if(vector1.at(i)<vector1.at(j)){
        if(vector1.at(i)<min){
     min = vector1.at(i);
    }
    }
    }
 }
 cout<<" minimum is " <<min<<endl;
}
int average(vector<int> vector1){
    int sum=0;
    int average=0;
    for(int i=0;i<vector1.size();i++){
        sum= vector1.at(i)+ sum;
    }
    average = sum/vector1.size();
    cout <<" average is "<<average<<endl;
}
int reverse(vector<int> vector1 ){
    cout <<" reverse vector is ";
    for (int i=vector1.size()-1;i>=0;i--){
        cout<< vector1.at(i)<<" ";
    }
}

int main(){
    int b=0;
    int n=0;
 vector<int> vector10 ;
 cout<<"enter number of element";
 cin>>b;

 for(int i=0;i<b;i++){
    cin>>n;

    vector10.push_back(n);
 }
 sort(vector10.begin(),vector10.end());
 print(vector10);
 maximum(vector10);
 minimum(vector10);
 average(vector10);
 reverse(vector10);

}
