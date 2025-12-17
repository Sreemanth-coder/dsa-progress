#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    map<int,int> mp;
    for(int i=0;i<n-1;i++){
      mp[nums[i]]=nums[i+1]-nums[i];
    }
    for(auto m:mp){
      cout<<m.first<<" "<<m.second<<endl;
    }
    
  }
  
}