#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int b= nums.size();
    int value=0;
    
     
        for(int i=0;i<b;i++){
            int sum=0;
        for(int j=i;j<b;j++){
           
        for(int l=i;l<=j;l++){
                sum= nums.at(l)+sum;
            }
            
            
            if(sum%k==0){
                value++;
            }
        }
        }
        
        cout<<"value is =" <<value;
    }
};
    
int main(){
    int k=5;
    vector<int> num ={4,5,0,-2,-3,1};
    Solution subarray;
    subarray.subarraysDivByK(num,k);
}