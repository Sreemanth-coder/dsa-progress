#include<bits/stdc++.h>
using namespace std;


int dis(int i,int j,string s,string t,vector<vector<int>> &dp){
  if(j<0) return 1;
  if(i<0) return 0;
  
  
  if(dp[i][j]!=-1) return dp[i][j];

  if(s[i]==t[j]){
    return dis(i-1,j-1,s,t,dp)+dis(i-1,j,s,t,dp);
  }
  else{
    return dis(i-1,j,s,t,dp);
  }

}


int main(){
  string s,t;
  cin>>s>>t;
  int ind1=s.size(),ind2=t.size();
  vector<vector<int>> dp(ind1+1,vector<int>(ind2+1,-1));


 // cout<<dis(ind1-1,ind2-1,s,t,dp);

//Tabulation
  for(int i=0;i<ind1+1;i++){
    dp[i][0]=1;
  }
  for(int i=1;i<ind2+1;i++){
    dp[0][i]=0;
  }
  for(int i=1;i<ind1+1;i++){
    for(int j=1;i<ind2+1;j++){
      if(s[i]==t[j]){
        dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
      }
      else{
        dp[i][j]=dp[i-1][j];
      }
    }
  }
  cout<<dp[ind1][ind2];


}