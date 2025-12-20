#include<bits/stdc++.h>
using namespace std;

int sub(int ind,vector<int>&nums,vector<int>&dp){
  if(ind<0) return 0;
  if(ind ==0) return nums[0];
  if(dp[ind]!=-1) return dp[ind];

  int pick=nums[ind]+sub(ind-2,nums,dp);
  int notpick=sub(ind-1,nums,dp);
  return dp[ind]=max(pick,notpick);
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<int> dp(n,-1);
  //sub(n-1,nums,dp);
  //cout<<dp[n-1];
  
  //Reducing space complexity
  int prev=nums[0];
  int prev1=0;
  for(int i=1;i<n;i++){
    int include=nums[i]+prev1;
    int exclude= prev;
    int curr=max(include,exclude);
    prev1=prev;
    prev=curr;
  }
  cout<<prev;



} 