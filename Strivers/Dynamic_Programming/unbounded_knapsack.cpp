#include<bits/stdc++.h>
using namespace std;


int uk(int ind,int w,vector<int>&val,vector<int>&wt,vector<vector<int>> &dp){
  if(ind==0){
    if(w%wt[0]==0) return (w/wt[0])*val[0];
    if(w==0) return 0; 
  }
  if(dp[ind][w]!=-1) return dp[ind][w];
  int not_pick=uk(ind-1,w,val,wt,dp);
  int pick=INT_MIN;
  if(wt[ind]<=w){
    pick=val[ind]+uk(ind,w-wt[ind],val,wt,dp);
  }

  return dp[ind][w]=max(pick,not_pick);

}






int main(){
  int n;
  cin>>n;
  vector<int> val(n);
  vector<int> wt(n);
  for(int i=0;i<n;i++){
    cin>>val[i];
  }
  for(int i=0;i<n;i++){
    cin>>wt[i];
  }
  int W;
  cin>>W;
  vector<vector<int>> dp(n,vector<int>(W+1,-1));
  cout<<uk(n-1,W,val,wt,dp);


}