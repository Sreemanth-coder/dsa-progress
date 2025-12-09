#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    vector<int>arr=nums;
    sort(arr.begin(),arr.end());
    if(arr!=nums){
      cout<<0<<endl;
      continue;
    }
    else{
      int Min=INT_MAX;
      for(int i=0;i<nums.size()-1;i++){
        Min=min(Min,nums[i+1]-nums[i]);
      }
      if(Min==0){
        cout<<1<<endl;
      }
      
      else{
        cout<<(Min/2)+1<<endl;
      }
    }
  }
}