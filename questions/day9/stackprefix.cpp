#include <iostream>
#include <stack>
#include<math.h>
using namespace std;
int prefix(string s){
    int operand1;
    int operand2;
    stack<int> st;
    for(int i=s.size()-1;i>=0;i--){
    if(s[i]>='0'&& s[i]<='9'){
        st.push(s[i]-'0');

    }
    else{
        operand1=st.top();
        st.pop();
        operand2=st.top();
        st.pop();
        switch(s[i]){
            case '+':
            st.push(operand1+operand2);
            break;
           case '-':
            st.push(operand1-operand2);
            break;
             case '/':
            st.push(operand1/operand2);
            break;
           case '*':
            st.push(operand1*operand2);
            break;
            case '^':
            st.push(pow(operand1,operand2));
            break;
        }
    }
    }
    return st.top();
}
int main(){
 string s="+7*45+20";
 cout<< prefix(s);
}

