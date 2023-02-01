#include <iostream>
using namespace std;
string reverse(string s){
    string t="";
    for (int i=s.size()-1;i>=0;i--){
        t.push_back(s.at(i));
    }
    cout<<t;
    return t;
}
string palendrone(string rev,string t){
    int a= rev.size();
    int b= t.size();
    int check;
    if(a==b){
   for(int i=0;i<a;i++){
    if(rev.at(i)==t.at(i)){
     check++;
    }
   }
   if(check==a){
    return "true";
   }
   else{
    return "false";
      }
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
            
            string rev= reverse(t);
           string a= palendrone(rev,t);
           if(a=="true"){
            int p= rev.size();
            string ans= rev;
           }
        }
    }
    cout<<ans;
}
int main(){
    string s="babab";

  
   substring(s);
   
}
