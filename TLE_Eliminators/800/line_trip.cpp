#include<bits/stdc++.h>
using namespace std;

void m1(int n,int x){
  vector<int> nums;
  nums.push_back(0);
  for(int i=0;i<n;i++){
    int j;
    cin>>j;
    nums.push_back(j);
  }
  nums.push_back(x);
  

  int Min=0;
  for(int i=0;i<nums.size()-1;i++){
    if(i==nums.size()-2){
      Min=max((nums[i+1]-nums[i])*2,Min);
    }
    else{
      Min=max(nums[i+1]-nums[i],Min);
    }
  }
  cout<<Min<<"\n";



}


int main(){

  int t;
  cin>>t;

  while(t--){

  int n,x;
  cin>>n>>x;

  m1(n,x);
  
  }
  return 0;
}