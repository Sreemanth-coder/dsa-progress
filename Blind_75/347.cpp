#include<bits/stdc++.h>
using namespace std;

/*
int main(){
  vector<int> nums={4,1,-1,2,-1,2,3};
  map<int,int> mp;
  for(int i=0;i<nums.size();i++){
    mp[nums[i]]++;
  }
  for(auto it:mp){
    cout<<it.first<<" "<<it.second<<endl;
  }
}
  */
 //brute force
 class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> final;
        for(auto m:mp){
            final.push_back({m.second,m.first});
        }
        sort(final.begin(),final.end());
        reverse(final.begin(),final.end());
        vector<int> f;
        for(int i=0;i<k;i++){
            f.push_back(final[i].second);
        }
        return f;
        
       
        
        
        
        
    }
};