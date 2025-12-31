#include<bits/stdc++.h>
using namespace std;

/*
int cc(int ind,int amt,vector<int> &nums){

  if(ind==0) {
    return (amt % nums[0]==0);
  }
  
  
  int not_pick=cc(ind-1,amt,nums);
  int pick=0;
  if(nums[ind]<=amt){
    pick=cc(ind,amt-nums[ind],nums);
  }
  return pick+not_pick;
}


int main(){
  int n;
  cin>>n;
  int amt;
  cin>>amt;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<cc(n-1,amt,nums);

}
  */

  /*

  int ccl(int ind,int amt,vector<int>&nums,vector<vector<int>> &dp){
    if(ind==0){
      if(amt%nums[0]==0) return amt/nums[0];
      return 1e9;
    }
    if(dp[ind][amt]!=-1) return dp[ind][amt];
    int not_pick=0+ccl(ind-1,amt,nums,dp);
    int pick=INT_MAX;
    if(nums[ind]<=amt){
      pick=1+ccl(ind,amt-nums[ind],nums,dp);
    }
    return dp[ind][amt]=min(pick,not_pick);

    
  }
    */




  int main(){
    int n,amt;
    cin>>n>>amt;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    vector<vector<int>>dp(n,vector<int>(amt+1,1e9));
    //cout<<ccl(n-1,amt,nums,dp);


    //Tabulation
    for(int i=0;i<amt+1;i++){
      if(i%nums[0]==0) dp[0][i]=i/nums[0];
      else dp[0][i]=1e9;
    }
    for(int i=0;i<n;i++){
      dp[i][0]=0;
    }
    for(int i=1;i<n;i++){
      for(int j=1;j<amt+1;j++){
        int not_pick=dp[i-1][j];
        int pick=1e9;
        if(nums[i]<=j){
          pick=1+dp[i][j-nums[i]];
        }
        dp[i][j]=min(pick,not_pick);
      }
    }
    return dp[n-1][amt]>=1e9 ? -1 :dp[n-1][amt];



  }