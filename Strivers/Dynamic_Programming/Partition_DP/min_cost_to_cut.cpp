#include<bits/stdc++.h>
using namespace std;
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
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return cut(1,c,cuts,dp);
    }
    int main(){
      int n;
      cin>>n;
      vector<int> cuts;
      minCost(n,cuts);
    }