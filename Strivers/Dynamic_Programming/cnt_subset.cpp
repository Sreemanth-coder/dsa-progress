#include<bits/stdc++.h>
using namespace std;

int sub(int ind,int k,vector<int> &nums){
  if(k==0) return 1;
  if(ind==0) return (nums[0]==k);
  int not_take=sub(ind-1,k,nums);
  int take=0;
  if(nums[ind]<=k){
    take=sub(ind-1,k-nums[ind],nums);
  }
  return take+not_take;

}



int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<sub(n-1,k,nums);

}