#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int a=nums.size();
        vector<int> arr1;
        vector<vector<int>> arr;
    int c=0;
   for(int i=0;i<a-2;i++){
    
    for(int j=i+1;j<a-1;j++){
        for(int k=j+1;k<a;k++){
            c=nums.at(i)+nums.at(j)+nums.at(k);

            if(c==0){
                arr1.push_back(i);
                arr1.push_back(j);
                arr1.push_back(k);
                arr.push_back(arr1);
                arr1.pop_back();
                arr1.pop_back();
                arr1.pop_back();
            }
        }
    }
   }
  return arr;
    }
};
int main(){
    Solution arr;
    vector<int> ar={-1,0,1,2,-1,-4};
    vector<int> arr2= arr.threeSum(ar);
}