#include<bits/stdc++.h>
using namespace std;
/*

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
  */
//Using tabulation method
  int main(){
    int n;
    cin>>n;
    vector<vector<int>> nums(n,vector<int>(3));
    for(int i=0;i<n;i++){
      for(int j=0;j<3;j++){
        cin>>nums[i][j];
      }
    }
    vector<vector<int>> dp(n,vector<int>(4));
    //Base Case
    dp[0][0]=max(nums[0][1],nums[0][2]);
    dp[0][1]=max(nums[0][0],nums[0][2]);
    dp[0][2]=max(nums[0][0],nums[0][1]);
    dp[0][3]=max(nums[0][0],max(nums[0][1],nums[0][2]));
    

    for(int days=1;days<n;days++){
      for(int last=0;last<4;last++){
        dp[days][last]=0;
        for(int i=0;i<3;i++){
          if(i!=last){
            int task=nums[days][i]+dp[days-1][i];
            dp[days][last]=max(dp[days][last],task);

          }
        }
      }
    }
    cout<<dp[n-1][3];
    

  }