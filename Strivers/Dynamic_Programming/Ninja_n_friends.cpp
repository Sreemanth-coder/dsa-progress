#include<bits/stdc++.h>
using namespace std;

int ab(int i,int j1,int j2,vector<vector<int>> &grid,int n,vector<vector<vector<int>>> &dp){
  
  if(j1<0 || j1>n-1 || j2<0 || j2>n-1){
    return -1e9;
  }
  if(i==n-1){
    if(j1==j2) return grid[i][j1];
    else return grid[i][j1]+grid[i][j2];
  }
  if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];

  int curr=(j1==j2) ? grid[i][j1]:grid[i][j1]+grid[i][j2];
  int maxi=-1e9;
  for(int dj1=-1;dj1<=1;dj1++){
    for(int dj2=-1;dj2<=1;dj2++){
      int task=curr+ab(i+1,j1+dj1,j2+dj2,grid,n,dp);
      maxi=max(maxi,task);
    }
  }
  return dp[i][j1][j2]=maxi;
}






int main(){
  int n;

  vector<vector<int>> grid={
    {2, 3, 1, 2},
    {3, 4, 2, 2},
    {5, 6, 3, 5}
  };
  n=grid.size();

  vector<vector<vector<int>>> dp(n,vector<vector<int>>(n,vector<int>(n,-1)));
  
  cout<<ab(0,0,n-1,grid,n,dp);



}