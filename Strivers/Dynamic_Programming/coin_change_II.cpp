#include<bits/stdc++.h>
using namespace std;

/*
int cc(int ind,int amt,vector<int>&nums,vector<vector<int>> &dp){
 
  if(ind==0){
    if(amt%nums[ind]==0) return 1;
    return 0;
  }
  if(dp[ind][amt]!=-1) return dp[ind][amt];
  int not_pick=cc(ind-1,amt,nums,dp);
  int pick=0;
  if(nums[ind]<=amt){
    pick=cc(ind,amt-nums[ind],nums,dp);
  }
  return dp[ind][amt]=pick+not_pick;
}
*/





int main(){
  int n;
  cin>>n;
  int amt;
  cin>>amt;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<vector<int>> dp(n,vector<int>(amt+1,-1));
  //cout<<cc(n-1,amt,nums,dp);
  for(int i=0;i<amt+1;i++){
    dp[0][]
  }


}