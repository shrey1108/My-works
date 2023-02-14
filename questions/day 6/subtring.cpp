#include <iostream>
using namespace std;
bool palendrone(string s){
    int a=s.size();
    int b=0;
     for(int i=0;i<a;i++){
        if(s[i]==s[a-1-i])
        b++;
     }
     if(b==a) return true;
     else return false;
}
int main(){
    string s= "cbbd";
    palendrone(s);
    int a= s.size();
    string t;
    string r;
    int b=0;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=a-i;j++){
            t=s.substr(i,j);
         if(palendrone(t)){ 
          if(b<=t.size()){
           r=t; b=t.size();
          }
        }
    }
    }
    cout<<r;
}
