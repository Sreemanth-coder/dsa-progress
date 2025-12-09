#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>nums(n-1);
    for(int i=0;i<n-1;i++){
      cin>>nums[i];
    }
    int cnt=0;
    for(auto n:nums){
      cnt+=n;
    }
    cout<<(-cnt)<<endl;
  }
}