#include<bits/stdc++.h>
using namespace std;

int m1(vector<int>&nums){
  int n=nums.size();
  int sum=0;
 
  for(int i=0;i<n;i++){
    int Min=INT_MAX;  
    for(int j=i;j<n;j++){
      Min=min(Min,nums[j]);
      sum+=Min;

    }
  }
  return sum;

}


int main(){
  vector<int> nums={3,1,2,4};
  cout<<m1(nums);
}