#include<bits/stdc++.h>

using namespace std;
void checking(vector<int> arr){
    int a=arr.size();
    int c=0;
   for(int i=0;i<a-3;i++){
    
    for(int j=i+1;j<a-2;j++){
        for(int k=j+1;k<a-1;k++){
            for(int l=k+1;l<a;l++){
            c=arr.at(i)+arr.at(j)+arr.at(k)+arr.at(l);

            if(c==0){
            cout<<"["<<arr.at(i)<<","<<arr.at(j)<<","<<arr.at(k)<<","<<arr.at(l)<<"]";
            
            }
            }
        }
         
    }
   
   }
}
int main(){
   vector <int> arr= {1,0,-1,0,-2,2};
    checking(arr);
}