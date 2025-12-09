#include<bits/stdc++.h>
using namespace std;

bool Sort(vector<int>&nums){
  vector<int> dup=nums;
  sort(dup.begin(),dup.end());
  for(int i=0;i<nums.size();i++){
    if(nums[i]!=dup[i]){
      return false;
    }
  }
  return true;
}

void m1(vector<int> &nums,int k){

  if(Sort(nums)){
    cout<<"YES"<<endl;
  }
  else{
    if(k==1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }



}


int main(){
  int t;
  cin>>t;
 while(t!=0){
  int n,k;
  cin>>n>>k;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }


  m1(nums,k);
  t--;
}
}