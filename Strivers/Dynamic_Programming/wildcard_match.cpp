#include<bits/stdc++.h>
using namespace std;

bool wild(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){

  //base cases
  if(i<0 && j<0) return true;
  if(i<0 && j>=0) return false;
  if(j<0 && i>=0){
    for(int i1=0;i1<=i;i1++){
      if(s1[i1]!='*') return false;
    }
    return true;
  }
  if(dp[i][j]!=-1) return dp[i][j];



  if(s1[i]==s2[j] || s1[i]=='?'){
    return dp[i][j]=wild(i-1,j-1,s1,s2,dp);
  }
  if(s1[i]=='*'){
    return dp[i][j]=wild(i-1,j,s1,s2,dp) || wild(i,j-1,s1,s2,dp);
  }
  return dp[i][j]=false;

}


int main(){
  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size(),m=s2.size();
  vector<vector<int>> dp(n,vector<int>(m,-1));
  cout<<wild(n-1,m-1,s1,s2,dp);
}