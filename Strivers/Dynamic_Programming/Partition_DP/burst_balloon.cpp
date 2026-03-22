
#include<bits/stdc++.h>
using namespace std;



int burst(int i,int j,vector<int>&nums){
  //base case
  if(i>j) return 0;
  int maxi=INT_MIN;
  for(int k=i;k<=j;k++){
    int coins=nums[i-1]*nums[k]*nums[j+1]+burst(i,k-1,nums)+burst(k+1,j,nums);
    maxi=max(maxi,coins);

  }
  return maxi;

}



int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  nums.push_back(1);
  nums.insert(nums.begin(),1);
  cout<<burst(1,n,nums);

}