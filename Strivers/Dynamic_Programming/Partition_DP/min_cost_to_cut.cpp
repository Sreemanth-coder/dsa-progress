#include<bits/stdc++.h>
using namespace std;
/*
 int cut(int i,int j,vector<int>&cuts,vector<vector<int>> &dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        long mini=INT_MAX;
        for(int k=i;k<=j;k++){
            long cost=cuts[j+1]-cuts[i-1]+cut(i,k-1,cuts,dp)+cut(k+1,j,cuts,dp);
            mini=min(mini,cost);
        }
        return dp[i][j]=mini;

    }
    int minCost(int n, vector<int>& cuts) {
        int c=cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(c+1,vector<int>(c+1,-1));
        return cut(1,c,cuts,dp);
    }
        */

    int main(){
      int n;
      cin>>n;
      int c;
      cin>>c;
      vector<int> cuts(c);
      for(int i=0;i<c;i++){
        cin>>cuts[i];
      }
      cuts.push_back(n);
      cuts.insert(cuts.begin(),0);
      sort(cuts.begin(),cuts.end());
      //tabulation
      vector<vector<int>> dp(c+2,vector<int>(c+2,0));
      for(int i=c;i>=0;i--){
        for(int j=1;j<=c;j++){
          int mini=INT_MAX;
          for(int k=i;k<=j;k++){
            
          
            int cost=cuts[j+1]-cuts[i-1]+dp[i][k-1]+dp[k-1][j];
            mini=min(mini,cost);
          }
          dp[i][j]=mini;
        }
      }
      cout<<dp[1][c];
    }