#include<bits/stdc++.h>
using namespace std;

/*
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
*/



int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<vector<bool>> dp(n,vector<bool>(k+1,false));
  //cout<<sub(n-1,t,nums,dp);
  for(int i=0;i<n;i++){
    dp[i][0]=true;
  }
  if(nums[0]<=k){
    dp[0][nums[0]]=true;
  }
  
  for(int i=1;i<n;i++){
    for(int j=1;j<k+1;j++){
      bool not_take=dp[i-1][j];
      bool take=false;
      if(nums[i]<=j){
        take=dp[i-1][j-nums[i]];
      }
      dp[i][j]=not_take ||take;
    }
  }
  cout<<dp[n-1][k];

  

}