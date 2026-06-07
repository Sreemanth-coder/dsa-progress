#include<bits/stdc++.h>
using namespace std;






int main(){
  int n=6;
  vector<vector<int>> adj={{},{},{3},{1},{0,1},{0,2}};
  vector<int> indegree(n,0);
  for(int i=0;i<adj.size();i++){
    for(int j=0;j<adj[i].size();j++){
      indegree[adj[i][j]]++;
    }
  }
  queue<int> q;
  for(int i=0;i<indegree.size();i++){
    if(indegree[i]==0){
      q.push(i);
    }
  }
  vector<int> final;
  while(!q.empty()){
    int x=q.front();
    q.pop();
    final.push_back(x);
    for(int it:adj[x]){
      indegree[it]--;
      if(indegree[it]==0) q.push(it);
      
    }
  }
  for(int i:final){
    cout<<i;
    cout<<" ";
  }

}