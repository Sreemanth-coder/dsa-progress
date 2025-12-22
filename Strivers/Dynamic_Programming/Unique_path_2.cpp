#include<bits/stdc++.h>
using namespace std;

int path(int m,int n,vector<vector<int>> &grid,vector<vector<int>> &dp){
  if(m==0 && n==0){
    return 1;
  }
  else if(m<0 || n<0 || grid[m][n]==1){
    return 0;
  }
  if(dp[m][n]!=-1) return dp[m][n];
  
  int up=path(m-1,n,grid,dp);
  
  int left=path(m,n-1,grid,dp);
  
  return dp[m][n]=left+up;
}

int main(){
  int m,n;
  cin>>m>>n;
  vector<vector<int>> grid(m,vector<int>(n)) ;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>grid[i][j];
    }
  }
  vector<vector<int>> dp(m,vector<int>(n,-1));
  cout<<path(m-1,n-1,grid,dp);


}