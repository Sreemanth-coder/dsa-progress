#include<bits/stdc++.h>
using namespace std;


int m1(int ind,int prev,vector<int>&nums,vector<vector<int>>&dp){

  if(ind ==nums.size()) return 0;
  if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
  
  int len=0+m1(ind+1,prev,nums,dp);
  if(prev==-1 || nums[ind]>nums[prev]){
    len=max(len,1+m1(ind+1,ind,nums,dp));
  }
  return dp[ind][prev+1]=len;

}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  
  vector<vector<int>> dp(n+1,vector<int>(n+1,0));
  //cout<<m1(ind,prev,nums,dp); 

  
  //using tabulation
  for(int ind=n-1;ind>=0;ind--){
    for(int prev=ind-1;prev>=-1;prev--){
      int len=0+dp[ind+1][prev+1];
      if(prev==-1 || nums[ind]>nums[prev+1]){
        len=max(len,1+dp[ind+1][ind+1]);
      }
      dp[ind][prev+1]=len;
    }

  }
  cout<<dp[0][0];

}