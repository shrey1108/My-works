#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a,b;
 vector<int> a1;
 cout<<"enter number of elemnt";
 cin>>a;
 for(int i=1;i<=a;i++){
    cout<<i<<".";
    cin>>b;
    a1.push_back(b);
 }
 for(int i=0;i<a-1;i++){
    int c=a1.at(i+1);
    for(int j=i+2;j<a;j++){ 
        if(c>=a1.at(j)) c=a1.at(j);
    }
    if(a1.at(i)>c) a1.at(i)=c;
 }
 for(int k=0;k<a;k++){
    cout<<a1.at(k)<<" ";
 }
}
// 3 4 3 2 1