#include <iostream>
using namespace std;
int converter(string n){
     int a=0;
           for(int i=0;i<n.size();i++){
              
               switch (n[i]){
                   case '0': a=(a*10)+0;break;
                   case '1': a=(a*10)+1;break;
                   case '2': a=(a*10)+2;break;
                   case '3': a=(a*10)+3;break;
                   case '4': a=(a*10)+4;break;
                   case '5': a=(a*10)+5;break;
                   case '6': a=(a*10)+6;break;
                   case '7': a=(a*10)+7;break;
                   case '8': a=(a*10)+8;break;
                   case '9': a=(a*10)+9;break;
               }
           }
           return a;
       }
       string convertstring(int a){
           string s;
           int b=0;
           while(a>0){
               b=a%10;
               a=a/10;
               switch (b){
                   case 0:  s.push_back('0');break;
                   case 1:  s.push_back('1');break;
                   case 2:  s.push_back('2');break;
                   case 3:  s.push_back('3');break;
                   case 4:  s.push_back('4');break;
                   case 5:  s.push_back('5');break;
                   case 6:  s.push_back('6');break;
                   case 7:  s.push_back('7');break;
                   case 8:  s.push_back('8');break;
                   case 9:  s.push_back('9');break;
               } 
           }
           cout<<s;
          return s;
       }
       string reverse(string s){
        string s1;
        for(int i=s.size()-1;i>=0;i--){
            s1.push_back(s[i]);
        }
        return s1;
       }
    // string multiply(string num1, string num2) {
    //    int n=converter(num1);
    //    int n1=converter(num2);
    //    int a=n*n1;
       
    //    return s;
    // }
    int realconvert(string s){
        int c=0;
        for(int i=0;i<s.size();i++){
        c=c*10+(s[i]-'0');
        }
        return c;
    }
 int main(){
       string s= "123";
       string s1="456";
       int num1=converter(s);
       int num2=converter(s1);
       int a= num1*num2;
       cout<<a;
       string s2=convertstring(a);
       string s3=reverse(s2);
    //  cout<<s3;
    int d=realconvert(s);
    cout<<d;
       
       }