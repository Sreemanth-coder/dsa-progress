#include<bits/stdc++.h>
using namespace std;
/*
int palin(int i,int j,string s){


  if(s[i]==s[j]){

  }


}

*/

int main(){
  string s;
  cin>>s;
  int n=s.size();
  string s1=s;
  reverse(s1.begin(),s1.end());
  
  vector<vector<int>> dp(n+1,vector<int>(n,0));
  for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
      if(s[i-1]==s1[j-1]){
        dp[i][j]=1+dp[i-1][j-1];
      }
      else{
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
    }
  }
  cout<<dp[n][n];



}