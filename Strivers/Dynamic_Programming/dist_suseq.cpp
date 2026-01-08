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
  vector<vector<int>> dp(ind1,vector<int>(ind2,-1));

  cout<<dis(ind1-1,ind2-1,s,t,dp);

}