
#include<bits/stdc++.h>
using namespace std;

/*

int burst(int i,int j,vector<int>&nums){
  //base case
  if(i>j) return 0;
  int maxi=INT_MIN;
  for(int k=i;k<=j;k++){
    int coins=nums[i-1]*nums[k]*nums[j+1]+burst(i,k-1,nums)+burst(k+1,j,nums);
    maxi=max(maxi,coins);

  }
  return maxi;

}
*/
/*
//Memoization
int burst(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
  //base case
  if(i>j) return 0;
  if(dp[i][j]!=-1) return dp[i][j];
  int maxi=INT_MIN;
  for(int k=i;k<=j;k++){
    int coins=nums[i-1]*nums[k]*nums[j+1]+burst(i,k-1,nums)+burst(k+1,j,nums);
    maxi=max(maxi,coins);

  }
  return dp[i][j]=maxi;

}
  */


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  nums.push_back(1);
  nums.insert(nums.begin(),1);
  vector<vector<int>> dp(n+2,vector<int>(n+2,0));
  //cout<<burst(1,n,nums,dp);

  //tabulation
  for(int i=n;i>=1;i--){
    for(int j=1;j<=n;j++){
      if(i>j) continue;
      int maxi=INT_MIN;
      for(int k=i;k<=j;k++){
        int coins=nums[i-1]*nums[k]*nums[j+1]+dp[i][k-1]+dp[k+1][j];
        maxi=max(coins,maxi);

      }
      dp[i][j]=maxi;
    }
  }
  cout<<dp[1][n];

}