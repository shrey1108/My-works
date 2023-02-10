#include <iostream>
#include <vector>
using namespace std;
 int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size();
        int a =(l+r)/2;
        int mid=(l+r)/2;
        // sort(nums.begin(),nums.end())
        while(mid>=0){
             if(nums[mid]==target) return mid;
             if(mid==0){
                 mid=a+1;
             }

           else  if(nums[mid]<target){
                l=mid+1;
                mid=(l+r)/2;
            }
            else if(nums[mid]>target){
                r=mid-1;
                mid=(l+r)/2;
            }
        }
        return -1;
    }
int main(){
    vector<int> arr={4,5,6,7,0,1,2};
    int target =0;
   cout<< search(arr,target);

}