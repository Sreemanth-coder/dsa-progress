#include<bits/stdc++.h>
using namespace std;

int sum(int ind,int tar,vector<int>&nums){
  if(ind==0){
    if(tar==0 && nums[0]==0) return 2;
    if(tar==0 || nums[0]==tar) return 1;
  }
  
  int not_pick=sum(ind-1,tar,nums);
  int pick=0;
  if(nums[ind]<=tar){
    pick=sum(ind-1,tar-nums[ind],nums);
  }
  return pick+not_pick;
}



int main(){
  int n,tar;
  cin>>n>>tar;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  int total=0;
  for(int i=0;i<n;i++){
    total+=nums[i];
  }
  int amt=(total-tar)/2;
  cout<<sum(n-1,amt,nums);

}