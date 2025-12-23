#include<bits/stdc++.h>
using namespace std;


int triangle(int i,int j,vector<vector<int>> &tri,int n,vector<vector<int>> &dp){
  
  //base case
  if(i==n-1) return tri[i][j];
  if(dp[i][j]!=-1) return dp[i][j];
  int left=tri[i][j]+triangle(i+1,j,tri,n,dp);
  int right=tri[i][j]+triangle(i+1,j+1,tri,n,dp);
  return dp[i][j]=min(left,right);
}




int main(){
   vector<vector<int>> tri{
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };
  int i=0,j=0;
  int n=tri.size();
  vector<vector<int>> dp(n,vector<int>(n,-1));
  cout<<triangle(i,j,tri,n,dp);

 

}