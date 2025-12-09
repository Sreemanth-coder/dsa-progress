#include<bits/stdc++.h>
using namespace std;
void sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> mp;
        int result=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        for(auto m:mp){
            if(float(m.second/k)==0.0){
                result+=(m.first)*(m.second);
            }
        }
        
        cout<<result;
        
        
    }

int main(){
  vector<int> nums={1,2,2,3,3,3,3,4};
  int k=2;
  sumDivisibleByK(nums,k);
}