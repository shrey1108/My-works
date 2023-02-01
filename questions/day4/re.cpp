 #include <bits/stdc++.h>
 using namespace std;
 int main(){
vector<int> nums ={4,6,7,7};
sort(nums.begin(),nums.end(),greater<int>());
 vector <int> num2;
        vector<int> num3 ;
        for(int i=nums.size()-1;i>=0;i--){
            num2=num3;
            num2.push_back(nums.at(i));
            for(int j=i-1;j>=0;j--){
                for(int k=i-1;k>=j;k--){
           if(nums.at(k)<=nums.at(k-1)){
              num2.push_back(j);
            }
           }
           for(int k=0;k<num2.size();k++){
        cout<< num2.at(k);
           }
        }
        cout<<endl;
        }
 }