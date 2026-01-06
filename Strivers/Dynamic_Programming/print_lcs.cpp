#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size(),m=s2.size();
  vector<vector<int>>dp(n+1,vector<int>(m,-1));
  for(int i=0;i<n+1;i++){
    dp[i][0]=0;
  }
  for(int i=0;i<m+1;i++){
    dp[0][i]=0;
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

  //cout<<dp[n][m];
  string s="";
  int index=n-1;
  for(int i=0;i<n;i++){
    s+='$';
  }
  int i=n,j=m;
  while(i>0 && j>0){
    if(s1[i-1]==s2[j-1]){
      s[index]=s1[i-1];
      index--;
      i--;
      j--;
    }
    else if(dp[i-1][j]>dp[i][j-1]){
      i--;
    }
    else{
      j--;
    }

  }
  for(char c:s){
    if(c=='$'){
      continue;
    }
    else cout<<c;
  }
}