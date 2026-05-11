#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<int> arr=nums;
  int j=0;
  while(j<n){
    for(int i=0;i<n;i++){
      if(i==0){
        nums[i]=arr[n-1];
      }
      else{
        nums[i]=arr[i-1];
      }
    }
    for(int i:nums){
      cout<<i<<" ";
    }
    cout<<endl;
    arr=nums;
    j++;
  }
}