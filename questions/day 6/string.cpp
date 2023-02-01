#include<iostream>
#include <string>
using namespace std;
string longestPalindrome(string s) {
        
        for(int i=0;i<s.size();i++){
            
            for(int j=i;j<s.size();j++){
                
             for(int k=i;k<=j;k++){
                string t="";
                t.push_back(s.at(k));
                string u="";
                for(int l=t.size()-1;l>=0;l--){
                 u.push_back(t.at(l));
                }
                for(int m=0;m<u.size();m++){
                    int sum;
                if(u.at(m)==t.at(m)){
                int sum=0;    
             }
             else{
                int sum=1;
             }
             if(sum==0){
                string b= u;
             
             cout <<b;
             }
                }
             }
            }
             cout<<endl;
            }
            
        }

int main(){
    string s="babad";
    longestPalindrome(s);
}