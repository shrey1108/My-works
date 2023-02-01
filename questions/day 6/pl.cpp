#include <bits/stdc++.h>
using namespace std;
string reverse(string s){
    string t="";
    for (int i=s.size()-1;i>=0;i--){
        t.push_back(s.at(i));
    }
   
    return t;
}
string palendrone(string rev){
    int a= rev.size();
  
  string t= reverse(rev);
  int b= t.size();
    int check=0;;
    
   for(int i=0;i<a;i++){
    
    if(rev.at(i)==t.at(i)){
     check=check+1;
    }
   
   }
    
   if(check==a&&a>1){
    return "t";
   }
    
   else{
    
    return "f";
      }
}

   
   
string substring(string s){
    int p=0;
    string ans="";
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string t="";
            for(int k=i;k<=j;k++){
                t.push_back(s.at(k));

            }
           // cout<<endl;
           // cout<<t;
             
            
             string rev= reverse(t);
             string r= palendrone(rev);
             
             //cout<<r;
             string e="t";
            if(r.at(0)== e.at(0)){
             int p= t.size();
              ans= t;
            }
           
           }
           
        }
        return ans;
       
    }
   
int main(){
    string s="babad";

  string t= substring(s);
cout<<t;
 
}
