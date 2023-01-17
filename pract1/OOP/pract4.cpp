#include <iostream>
using namespace std;
class binary{
    string b;
    public:
    void read();
    void checkifbinary();
    void convertbinary();
    void display();

};
//scope resolution opertor
void binary :: read(){
cout<<"enter your string"<<endl;
cin>>b;
}
void binary::checkifbinary()
{
int c=b.length();
int d=0;
for(int i=0;i<c;i++){
    if(b.at(i) != '0'&& b.at(i) !='1'){
       cout<<"incorrect binary number"<<endl;
        exit(0);
    }
}
cout<<"it is binarry"<<endl;
}
void binary::convertbinary(){
    string c;
    for(int i=0;i<b.length();i++){
        if(b.at(i)=0){
            b.at(i)=0;
            
        }
        else{
            b.at(i)=1;
        }
    }
    cout<<"string"<<c;
}


int main()
{
 binary c;
 c.read();
 c.checkifbinary();
 c.convertbinary();
}