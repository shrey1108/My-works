#include<bits/stdc++.h>

using namespace std;
void checking(vector<int> arr){
    int a=arr.size();
    int c=0;
   for(int i=0;i<a-2;i++){
    
    for(int j=0;j<a-1;j++){
        for(int k=0;k<a;k++){
            // for(int l=k+1;l<a;l++){
                if(i!=j&&j!=k&&k!=i){
            c=arr.at(i)+arr.at(j)+arr.at(k);

            if(c==0){
            cout<<"["<<arr.at(i)<<","<<arr.at(j)<<","<<arr.at(k)<<"]";
            
            
            }
                }
        }
         
    }
   
   }
}
int main(){
   vector <int> arr= {-1,0,1,2,-1,-4};
    checking(arr);
}