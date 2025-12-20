#include<bits/stdc++.h>
using namespace std;

//Recursion
int jump(int ind,vector<int>&nums,vector<int> &dp){
  if(ind==0) return 0;
  
  if(dp[ind]!=-1) return dp[ind];
  int j2=INT_MAX;
  int j1=jump(ind-1,nums,dp)+abs(nums[ind]-nums[ind-1]);
  if(ind>1){
    j2=jump(ind-2,nums,dp)+abs(nums[ind]-nums[ind-2]);
  }
  return dp[ind]=min(j1,j2);

}


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<int> dp(n,-1);
  //jump(n-1,nums,dp);

  //Tabulation Method
  dp[0]=0;
  for(int i=1;i<n;i++){
    int j1=dp[i-1]+abs(nums[i]-nums[i-1]);
    int j2=INT_MAX;
    if(i>1){
      j2=dp[i-2]+abs(nums[i]-nums[i-2]);
    }
    dp[i]=min(j1,j2);

  }
  cout<<dp[n-1];

  /* 
  Greedy doesnt work 
  int i=0;
  int min=0;
  while(i<n ){
    int m1=abs(nums[i]-nums[i+1]);
    if(i+2<n){
      int m2=abs(nums[i]-nums[i+2]);
      if(m2<m1){
      min+=m2;
      i+=2;
      cout<<min<<endl;
    }
    else{
      min+=m1;
      i++;
      cout<<min<<endl;
    }
    }
    else{
      min+=m1;
    }
    

  }
  cout<<min;
  */
 //cout<<dp[n-1]<<endl;
}