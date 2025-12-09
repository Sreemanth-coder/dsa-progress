#include<bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector<int> nums,int k){
    /*
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==k){
                return {i,j};
            }
        }
    }
    return {-1,-1};
    */
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        int num=nums[i];
        int more=k-nums[i];
        if(mp.find(more)!=mp.end()){
            return {mp[more],i};
        }
        mp[num]=i;
    }

}

int main(){
    vector<int> nums={2,7,11,15};
    int target=26;
    vector<int> out=two_sum(nums,target);
    for(auto it=out.begin();it!=out.end();it++){
        cout<<*(it)<<" ";
    }
}