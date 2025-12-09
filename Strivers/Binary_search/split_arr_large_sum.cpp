#include<bits/stdc++.h>
using namespace std;


void m1(vector<int> &nums,int k){
  int n=nums.size();
  k=min(k,n);
  int low=0,high=nums.size()-1;
  while(low<=high){
    int mid=(low+high)/2;
    int s1=0,s2=0;
    for(int i=0;i<=mid;i++){
      s1+=nums[i];
    }
    for(int j=mid+1;j<nums.size();j++){
      s2+=nums[j];
    }
    if(s1<s2){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  cout<<high<<endl;
  int final=0;
  for(int i=high+1;i<nums.size();i++){
    final+=nums[i];
  }
  cout<<final;



}

int main(){
  vector<int> nums={1,2,3,4,5};
  int k=2;
  m1(nums,k);
}