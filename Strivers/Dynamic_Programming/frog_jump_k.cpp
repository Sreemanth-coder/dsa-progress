#include<bits/stdc++.h>
using namespace std;

int jump(int ind,vector<int>&nums,vector<int> &dp,int k){
  if(ind==0) return 0;
  int steps=INT_MAX;
  for(int i=1;i<=k;i++){
    if(ind-i>=0){
      int j1=jump(ind-i,nums,dp,k)+abs(nums[ind]-nums[ind-i]);
      steps=min(j1,steps);
    }
    
  }
  return dp[ind]=steps;

}

int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<int> dp(n,-1);
  jump(n-1,nums,dp,k);
  cout<<dp[n-1];
}