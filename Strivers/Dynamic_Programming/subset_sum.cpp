#include<bits/stdc++.h>
using namespace std;

bool sub(int ind,int t,vector<int>&nums){
  if(t==0) return true;
  if(ind==0) return (nums[ind]==t);

  bool not_take=sub(ind-1,t,nums);
  bool take=false;
  if(t>nums[ind]){
    take=sub(ind-1,t-nums[ind],nums);
  }
  return not_take || take;

}


int main(){
  int n;
  cin>>n;
  int t;
  cin>>t;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<sub(n,t,nums);
  

}