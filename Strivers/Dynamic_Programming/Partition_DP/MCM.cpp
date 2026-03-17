#include<bits/stdc++.h>
using namespace std;

int mcm(int i,int j,vector<int>&nums){
  if(i==j) return 0;
  int mini=INT_MAX;
  int steps;
  for(int k=i;k<j;k++){
    steps=nums[i-1]*nums[k]*nums[j]+mcm(i,k,nums)+mcm(k+1,j,nums);
  }
  mini=min(mini,steps);
  return mini;

}






int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<mcm(1,n-1,nums);


}