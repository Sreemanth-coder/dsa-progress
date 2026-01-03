#include<bits/stdc++.h>
using namespace std;

/*
int lcs(int ind1,int ind2,string &s1,string &s2,vector<vector<int>> &dp){

  if(ind1<0 || ind2<0) return 0;
  if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
  
  if(s1[ind1]==s2[ind2]){
    return dp[ind1][ind2]=1+lcs(ind1-1,ind2-1,s1,s2,dp);
  }
  return dp[ind1][ind2]=max(lcs(ind1-1,ind2,s1,s2,dp),lcs(ind1,ind2-1,s1,s2,dp));

  



}

*/

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int ind1=s1.size()-1,ind2=s2.size()-1;
  int n=s1.size(),m=s2.size();
  vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
  //cout<<lcs(ind1,ind2,s1,s2,dp);
  
  for(int i=0;i<n+1;i++){
    dp[i][0]=0;
  }
  for(int j=0;j<m+1;j++){
    dp[0][j]=0;
  }
  for(int i=1;i<n+1;i++){
    for(int j=1;j<m+1;j++){
      if(s1[i-1]==s2[j-1]){
        dp[i][j]=1+dp[i-1][j-1];
      }
      else{
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
    }
  }
  cout<<dp[n][m];



}