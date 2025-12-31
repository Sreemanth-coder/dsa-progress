#include<bits/stdc++.h>
using namespace std;

int cc(int ind,int amt,vector<int> &nums){

  if(ind==0) {
    return (amt % nums[0]==0);
  }
  
  int not_pick=cc(ind-1,amt,nums);
  int pick=0;
  if(nums[ind]<=amt){
    pick=cc(ind,amt-nums[ind],nums);
  }
  return pick+not_pick;
}


int main(){
  int n;
  cin>>n;
  int amt;
  cin>>amt;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<cc(n-1,amt,nums);

}