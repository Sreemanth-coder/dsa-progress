#include<bits/stdc++.h>
using namespace std;

int path(int i,int j,vector<vector<int>> &nums,int n,vector<vector<int>> &dp){
  //BaseCase
  if(i==n-1) return nums[i][j];
  if(j>n-1 || j<0) return 0;
  if(dp[i][j]==-1) return nums[i][j];
  
  int same=path(i+1,j,nums,n,dp);
  int left=path(i+1,j-1,nums,n,dp);
  int right=path(i+1,j+1,nums,n,dp);
  return dp[i][j]=nums[i][j]+min({same,left,right});
  

}



int main(){
  
  vector<vector<int>> nums={
    {2,1,3},
    {6,5,4},
    {7,8,9}
  };
  int n=nums.size();
  int i=0,j=0;
  vector<vector<int>> dp(n,vector<int>(n,-1));
  int mini=INT_MAX;
  for(int j=0;i<n;j++){
    mini=min(mini,path(i,j,nums,n,dp));
  }
  cout<<mini;
  
}