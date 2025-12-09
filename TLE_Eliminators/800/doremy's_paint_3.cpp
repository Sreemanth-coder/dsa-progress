#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }

  unordered_map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[nums[i]]++;
  }

  int rep=0;
  for(auto m:mp){
    rep=max(rep,m.second);
  }
  if(rep>=2 && rep-1==n-rep){
    cout<<"Yes"<<endl;
  }
  else if(rep==1 && n==2){
    cout<<"Yes"<<endl;
  }
  else if(rep==n){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No";
  }


}