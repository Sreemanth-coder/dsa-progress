#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> edges={{0,1},{0,3},{3,4},{4,5},{5,6},{1,2},{2,6},{6,7},{7,8},{6,8}};
  int n=9;
  vector<vector<int>> adj(n);
  for(auto it:edges){
    adj[it[0]].push_back(it[1]);
    adj[it[1]].push_back(it[0]);
  }
  vector<int> dist(n,1e9);
  queue<int> q;
  dist[0]=0;
  q.push(0);
  while(!q.empty()){
    int node=q.front();
    q.pop();
    for(int it:adj[node]){
      if(dist[node]+1<dist[it]){
        dist[it]=dist[node]+1;
        q.push(it);
      }

    }
  }
  vector<int> ans(n,-1);
  for(int i=0;i<n;i++){
    if(dist[i]!=1e9){
      ans[i]=dist[i];
    }
  }
  for(int i:ans){
    cout<<i<<" ";
  }

}