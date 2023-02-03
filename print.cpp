#include <bits/stdc++.h>
#include <vector>
using namespace std;
 int removing(vector<int> nums){
  vector<int> arr;
        sort(nums.begin(),nums.end());
        int a= nums.at(0);
        arr.push_back(nums.at(0));
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)!=a){
            a= nums.at(i);
            arr.push_back(nums.at(i));
            }
        }
        for(int j=0;j<arr.size();j++){
        cout<< arr.at(j)<<" < ";
        }
}
int main(){
    vector<int> arr ={0,0,0,0,1,5,5,4};
  removing(arr);
}