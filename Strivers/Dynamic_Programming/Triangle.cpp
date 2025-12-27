#include<bits/stdc++.h>
using namespace std;
/*
/*
int triangle(int i,int j,vector<vector<int>> &tri,int n,vector<vector<int>> &dp){
  
  //base case
  if(i==n-1) return tri[i][j];
  if(dp[i][j]!=-1) return dp[i][j];
  int left=tri[i][j]+triangle(i+1,j,tri,n,dp);
  int right=tri[i][j]+triangle(i+1,j+1,tri,n,dp);
  return dp[i][j]=min(left,right);
}
  */



/*
int main(){
   vector<vector<int>> tri{
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };
  
  int n=tri.size();
  vector<vector<int>> dp(n,vector<int>(n,-1));
  //cout<<triangle(i,j,tri,n,dp);

  //Base Case
  for(int j=0;j<tri[n-1].size();j++){
    dp[n-1][j]=tri[n-1][j];
  }
  for(int i=n-2;i>=0;i--){
    for(int j=i;j>=0;j--){
      int left=tri[i][j]+dp[i+1][j];
      int right=tri[i][j]+dp[i+1][j+1];
      dp[i][j]=min(left,right);

    }
  }
  
  cout<<dp[0][0];

 

}
*/

int main(){
  cout<<22/2;
}