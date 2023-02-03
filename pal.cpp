#include <iostream>
#include <stack>
#include<linklist.exe>
using namespace std;

    void isValid(string s) {
        stack<char> st;

        
        char a;
         if(s[0]=='}'||s[0]==')'||s[0]==']'){
                cout<< "false";
         }
        for(int i=0;i<s.size();i++){
           
            
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                st.push(s[i]);

            }
            else if(s[i]=='}'||s[i]==')'||s[i]==']'){
                a=st.top();
                if((a=='('&&s[i]==')')||(a=='['&&s[i]==']')||(a=='{'&&s[i]=='}')){
                    st.pop();
                }

            }
        }
        if(st.empty()) cout<< "true";
        else cout<<"false";
            
    }
int main(){
    string a="(){}}{";
    
   isValid(a);
   linklist<int>

}