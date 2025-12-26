#include<bits/stdc++.h>
using namespace std;

bool sub(int ind,int t,vector<int>&nums,vector<vector<bool>> &dp){
  if(t==0) return true;
  if(ind==0) return (nums[ind]==t);

  if(dp[ind][t]!=-1) return dp[ind][t];
  bool not_take=sub(ind-1,t,nums,dp);
  bool take=false;
  if(t>nums[ind]){
    take=sub(ind-1,t-nums[ind],nums,dp);
  }
  return dp[ind][t]=not_take || take;

}


int main(){
  int n;
  cin>>n;
  int t;
  cin>>t;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<vector<bool>> dp(n,vector<bool>(t+1,-1));
  cout<<sub(n-1,t,nums,dp);
  

}