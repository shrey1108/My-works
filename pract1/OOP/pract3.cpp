#include <iostream>
using namespace std;
class person{
public:
  person(){
    cout<<"constructor is executed"<<endl;
  }  
  ~person(){
    cout<<"destructor is executed"<<endl;
  }
  person(int a,int b){
    cout<<"this is sum " <<a+b <<endl;
  }
};
int main(){

 person p1,p2;
 person p3(2,3);
}