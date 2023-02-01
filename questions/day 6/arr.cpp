#include <bits/stdc++.h>
using namespace std;
int subarray(vector<int> arr,int k){
    int b= arr.size();
    int value=0;
    vector<int> arr1;
    for (int i=0;i<b;i++){
        int sum=0;
        for(int j=i;j<b;j++){   
            sum= arr.at(j)+sum;    
            if(sum%k==0){
                value++;
            }
        }
        }
        return value;
        
    }
    int main(){
       int k=5;
        vector<int> arr {4,5,0,-2,-3,1};
        subarray(arr,k);
        cout << subarray;
    }