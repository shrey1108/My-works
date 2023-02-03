#include <bits/stdc++.h>
using namespace std;
 int longestValidParentheses(string s) {
        stack<char> st;
        int a=0;
     for(int i=0;i<s.length();i++){
        if(s[i]=='('){
          st.push(s[i]);
          
        }
        else if((s[i]==')')&&(s[i-1]=='(')){
         st.pop();
         a=a+2;
         }
         }
    return a;
    }
    int main(){
        string s= ")()())())()";
        cout<<longestValidParentheses(s);

    }