#include<bits/stdc++.h>
using namespace std;

int main(){
  int v;
  cin>>v;
  vector<int> adj[v];
  adj[0] = {1, 3};
  adj[1] = {0, 2};
  adj[2] = {1};
  adj[3] = {0,4};
  adj[4] = {3};
  vector<int> vist(v,0);
  queue<int> q;
  q.push(0);
  vist[0]=1;
  vector<int> bfs;
  while(!q.empty()){
    int node=q.front();
    q.pop();
    bfs.push_back(node);
    for(auto it:adj[node]){
      if(!vist[it]){
        vist[it]=1;
        q.push(it);
      }
    }
  }
  for(int x:bfs){
    cout<<x<<" ";
  }

}