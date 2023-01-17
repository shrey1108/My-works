// leapyear
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int year;
    cin>> year;
    if (year%4==0){
        cout<< "it is leap year";
    }
    else{
        cout <<" it is not a leap year";
    }

    return 0;
}
