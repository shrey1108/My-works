#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,3,4,5};
    int b = sizeof(arr)/sizeof(arr[0]);
    for( int i= 0;i<b;i++){
        int c= arr[i];
        cout<<c;
    }
    return 0;
}
