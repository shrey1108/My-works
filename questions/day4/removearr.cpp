#include <bits/stdc++.h>
using namespace std;
int display(vector <int> arr){
  vector<int> arr1 ={};
    sort(arr.begin(),arr.end());
  arr1.push_back(arr.at(0));
    for(int i=1;i<arr.size();i++){
       if(arr.at(i-1)==arr.at(i))
       continue;
       arr1.push_back(arr.at(i));
    }
        for(int i=0;i<arr1.size();i++){
            cout<<arr1.at(i)<<" ";
        }
    }

int main(){
    vector<int> arr ={1,1,5,3,4,4,7};
    display(arr);
}