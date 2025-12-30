#include<bits/stdc++.h>
using namespace std;

/*
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
*/


int main(){
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  //cout<<sub(n-1,k,nums);
  vector<int> prev(k+1,0),curr(k+1,0);
  prev[0]=1;
  if(nums[0]<=k) prev[nums[0]]+=1;
  for(int i=1;i<n;i++){
    for(int j=1;j<k+1;j++){
      int not_take=prev[j];
      int take=0;
      if(nums[i]<=j){
        take=prev[j-nums[i]];
      }
      curr[j]=not_take+take;
    }
    prev=curr;
  }
  cout<<prev[k]+1;

}