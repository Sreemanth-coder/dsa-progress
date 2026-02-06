#include<bits/stdc++.h>
using namespace std;


int m1(int ind,int buy,int n_b,vector<int> &nums,vector<vector<vector<int>>>&dp,int n){
  if(n_b==0) return 0;
  if(ind==n) return 0;
  if(dp[ind][buy][n_b]!=-1) return dp[ind][buy][n_b];

  long price=0;
  if(buy==0){
    price=max(-nums[ind]+m1(ind+1,1,n_b,nums,dp,n),0+m1(ind+1,0,n_b,nums,dp,n));
  }
  else{
    price=max(nums[ind]+m1(ind+1,0,n_b-1,nums,dp,n),0+m1(ind+1,1,n_b,nums,dp,n));
  }

  return dp[ind][buy][n_b]=price;

}


int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
  
  
  //cout<<m1(ind,buy,n_b,nums,dp,n);


  //Tabulation

  for(int ind=n-1;ind>=0;ind--){
    for(int buy=0;buy<2;buy++){
      for(int n_b=1;n_b<3;n_b++){
        if(buy==0){
          dp[ind][buy][n_b]=max(-nums[ind]+dp[ind+1][1][n_b],0+dp[ind+1][0][n_b]);
        }
        else{
          dp[ind][buy][n_b]=max(nums[ind]+dp[ind+1][0][n_b-1],0+dp[ind+1][1][n_b]);
        }

      }
    }
  }
  cout<<dp[0][0][2];
}
