#include<bits/stdc++.h>
using namespace std;



int edis(int i,int j,string &s1,string &s2,vector<vector<int>> &dp){

  if(j<0) return 1;
  if(i<0) return 0;

  if(dp[i][j]!=-1) return dp[i][j];

  if(s1[i]==s2[j]){
    return edis(i-1,j-1,s1,s2,dp);
  }
  else{
    return 1+min(edis(i-1,j-1,s1,s2,dp),min(edis(i-1,j,s1,s2,dp),edis(i,j-1,s1,s2,dp)));
  }
  

}


int main(){
  string s1,s2;
  cin>>s1>>s2;
  int ind1=s1.size(),ind2=s2.size();
  vector<vector<int>> dp(ind1+1,vector<int>(ind2+1,-1));
  cout<<edis(ind1-1,ind2-1,s1,s2,dp);
  
}
