#include <iostream>
#include<stack>
using namespace std;
void string1 (string s){
//   stack<string> a;
//   a.push(s.at())
int sum=0;
for(int i=0;i<s.size()-1;i++){
    if(s.at(i)=='('|| s.at(i)=='{'||s.at(i)=='[' ){
    for(int j=1;j<s.size();j++){
        if(s.at(j)==')'|| s.at(j)=='}'||s.at(j)==']' ){
        sum=-1;
            
        }
    }
}

}
cout<<sum;


}
int main(){
string s="((";
string1(s);
string s2 =")(){}";
string1(s2);
}