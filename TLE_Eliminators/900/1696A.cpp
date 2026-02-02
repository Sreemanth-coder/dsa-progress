#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&nums){
  for(int i:nums){
    if(i!=0){
      return false;
    }
  }
  return true;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int op=0;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    //check for entire zeroes
    if(check(nums)){
      cout<<op<<endl;
      continue;
    }
    else{

      int i=0,j=0;
      while(i<n){
        if(nums[i]==0 && j==0){
          i++;
        }
        else{
          while(nums[i]!=0){
            i++;
          }
          op++;
        }
      }
      cout<<op<<endl;

    }
    
  }
}
