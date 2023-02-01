#include <iostream>
#include <stack>
using namespace std;
int stack1(string s){
    stack<string> st;
    string word;
    for(int i=0;i<s.size();i++){
    //   word+=s[i];
    //   if(s[i]==' '){
    //   st.push(word);
    //   word="";
      
    //   }
    // if(i==s.size()-1){
    //     st.push(word);
    //     word="";
    //   }
    
    word=s[i];
    st.push(word);
    word="";

    st.
      }
      while(!st.empty()){
        for(int j=0;j<st.size();j++){
            cout<<st.top();
            st.pop();
        }
      }
    }
    int main(){
        string s="hello your";
        // cin>>s;
        stack1(s);
    }
