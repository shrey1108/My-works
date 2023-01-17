#include <iostream>

#include <string>
using namespace std;
int main()
{
    string firstname = "shrey";
    string lastname = "chandrakar";
    string space = " ";
    string a = firstname.append(lastname);
    int b = firstname.length();
    //indexing start from 0..
    cout<< lastname[4]<<endl;
    firstname[4] = 'u';
    cout<< firstname <<endl;

}