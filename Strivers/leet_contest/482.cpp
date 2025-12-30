#include<bits/stdc++.h>
using namespace std;
/*
int pre(int ind,vector<int> &nums){
        int presum=0;
        for(int i=0;i<=ind;i++){
            presum+=nums[i];
        }
        return presum;
    }
    int minsum(int ind,vector<int>&nums){
        int mins=INT_MAX;
        int n=nums.size();
        for(int i=ind+1;i<n;i++){
            mins=min(mins,nums[i]);
        }
        return mins;
    }
   int main() {
      vector<int> nums={
        10,-1,3,-4,-5
      };
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            int s1=pre(i,nums);
            int s2=minsum(i,nums);
            mini=min(mini,s1-s2);
        }
        cout<<mini;
        
    }

    */
   int main(){
    int cost1=50,cost2=55,costBoth=72,need1=5,need2=3;
    long long w1=cost1*need1 + cost2*need2;
    long long r1=max(need1,need2);
    long long w2=costBoth* r1;
    cout<<min(w1,w2);
   }