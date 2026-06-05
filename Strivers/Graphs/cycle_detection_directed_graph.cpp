#include<bits/stdc++.h>
using namespace std;

/*
bool cycle(int src,vector<vector<int>> &adj,vector<int> &vist,vector<int> &pathvist){
  vist[src]=1;
  pathvist[src]=1;

  for(auto it:adj[src]){
    if(!vist[it]){
      if(cycle(it,adj,vist,pathvist)==true){
        return true;
      }
    }
    else if(pathvist[it]){
      return true;
    }
  }
  pathvist[src]=0;
  return false;

}


int main(){
  vector<vector<int>> nums={{1,0},{0,1}};
  int n;
  cin>>n;
  vector<vector<int>> adj(n);
  for(int i=0;i<nums.size();i++){
    adj[nums[i][1]].push_back(nums[i][0]);
  }
  vector<int> vist(n,0);
  vector<int> pathvist(n,0);
  for(int i=0;i<n;i++){
    if(!vist[i]){
      if(cycle(i,adj,vist,pathvist)==true){
        cout<<"Cycle detected";
        return 0;
      };
    }
  }
  cout<<"cycle not detected";


}
  */

  int main(){
    int n=3;
    vector<int> nums;
    for(int i=0;i<n;i++){
      nums.push_back(i);
    }
    for(int i:nums){
      cout<<i<<" ";
    }
  }