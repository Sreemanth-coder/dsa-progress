#include<bits/stdc++.h>
using namespace std;

/*
-->Using recursion
int f(int n,vector<int> &dp){
  if(n<=1){
    return n;
  }
  return dp[n]=f(n-1,dp)+f(n-2,dp);

}
*/

int main(){
  int n;
  cin>>n;
  /*
  Tabulation method
  vector<int> dp(n+1,-1);
  dp[0]=0,dp[1]=1;
  for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }
  cout<<dp[n]<<endl;
  */
 int prev=1,prev1=0;
 for(int i=2;i<=n;i++){
  int curr=prev+prev1;
  prev1=prev;
  prev=curr;
 }
 cout<<prev;
 
 // cout<<f(n,dp);
}
