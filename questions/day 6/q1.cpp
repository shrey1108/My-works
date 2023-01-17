#include<bits/stdc++.h>
using namespace std;

int main(){
string s = "hello";

string st =s;
int b= s.size();
cout<<b;
for (int i=0; i<s.size();i++){
   if(i<2){
    st[i]=s[b-1];
    i++;
   }
   if(i>0){
    cout<<i;
   st[i]=s[i-1];
   }


}

cout<<st;
}
