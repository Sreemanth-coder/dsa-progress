#include<bits/stdc++.h>
using namespace std;

int m1(vector<int>&nums,int n,int ind,int buy,int price,vector<vector<int>> &dp){

  //base case
  if(ind==n){
    return 0;
  }
  if(dp[ind][buy]!=-1) return 0;

  if(buy==1){
    price= max(-nums[ind]+m1(nums,n,ind+1,0,price,dp),0+m1(nums,n,ind+1,1,price,dp));

  }
  else{
    price=max(nums[ind]+m1(nums,n,ind+1,1,price,dp),0+m1(nums,n,ind+1,0,price,dp));

  }
  return dp[ind][buy]=price;
}



int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  int price=0,buy=1,ind=0;
  vector<vector<int>> dp(n+1,vector<int>(2,-1));
  cout<<m1(nums,n,ind,buy,price,dp);



}