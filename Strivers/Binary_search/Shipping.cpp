#include<bits/stdc++.h>
using namespace std;

bool fnd(vector<int>&nums,int mid,int k){

  int sum=0;
  int days=0;
  for(int i=0;i<nums.size();i++){
    sum+=nums[i];
    if(sum>mid){
      sum=nums[i];
      days++;
    }

    
  }
  if(days<=k){
    return true;
  }
  return false;

}

void m1(vector<int> &nums,int k){
  int Max=0;
  int n=nums.size();
  for(int i=0;i<nums.size();i++){
    Max+=nums[i];
  }
  int low=n/k;
  int high=Max;
  while(low<=high){
    int mid=(low+high)/2;
    if(fnd(nums,mid,k)){
      high=mid-1;
    }
    else{
      low=mid+1;
    }



  }
  cout<<low;

}

int main(){
  vector<int> nums={1,2,3,4,5,6,7,8,9,10};
  int k=5;
  m1(nums,k);
}