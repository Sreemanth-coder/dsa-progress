#include<bits/stdc++.h>
using namespace std;


int m1(int ind,int prev,vector<int>&nums){

  if(ind ==nums.size()) return 0;
  
  int len=0+m1(ind+1,prev,nums);
  if(prev==-1 || nums[ind]>nums[prev]){
    len=max(len,1+m1(ind+1,ind,nums));
  }
  return len;

}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  int ind=0;
  int prev=-1;
  cout<<m1(ind,prev,nums); 

}