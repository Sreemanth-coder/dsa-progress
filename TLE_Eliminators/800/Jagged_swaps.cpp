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
    int x=1;
    for(int i=1;i<n-1;i++){
      if(nums[i-1]<nums[i] && nums[i]>nums[i+1] ){
        swap(nums[i],nums[i+1]);
        i=max(0,i-2);
        x=1;
      }
      else if(nums[i-1]<nums[i] && nums[i]<nums[i+1]){
        x=1;
        continue;
      }
      else{
        x=0;
        break;
      }
    }
    if(x==1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
  }
}