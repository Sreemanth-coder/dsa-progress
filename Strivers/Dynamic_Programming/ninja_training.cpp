#include<bits/stdc++.h>
using namespace std;

int nin(int ind,int last,int arr[][3],int dp[][4]){
 
  if(ind==0){
     int maxi=0;
    for(int i=0;i<3;i++){
      if(i!=last){
        maxi=max(maxi,arr[0][i]);
      }
    }
    return dp[0][last]=maxi;
  }
  if(dp[ind][last]!=-1){
    return dp[ind][last];
  }
  int maxi=0;
  for(int i=0;i<3;i++){
    if(i!=last){
      int task=arr[ind][i]+nin(ind-1,i,arr,dp);
      maxi=max(maxi,task);
    }

  }
  return dp[ind][last]=maxi;

}

int main(){
  int n;
  cin>>n;
  int arr[n][3];
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  int dp[n][4];
  for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
      dp[i][j]=-1;
    }
  }

  cout<<nin(n-1,3,arr,dp);

}