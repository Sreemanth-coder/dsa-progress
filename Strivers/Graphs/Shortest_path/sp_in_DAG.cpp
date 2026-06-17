#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<vector<pair<int,int>>> &adj,vector<int> &vist,stack<int> &st){
  vist[i]=1;
  for(auto it:adj[i]){
    int v=it.first;
    if(!vist[v]){
      dfs(v,adj,vist,st);
    }
  }
  st.push(i);
}

int main(){
  vector<vector<int>> edges={{0,1,2},{0,2,1}};
  int n=3;

  vector<vector<pair<int,int>>> adj(n);
  for(auto it:edges){
    adj[it[0]].push_back({it[1],it[2]});
  }
  stack<int> st;
  vector<int> vist(n);
  for(int i=0;i<n;i++){
    if(!vist[i]){
      dfs(i,adj,vist,st);
    }
  }
  vector<int> dist(3,1e9);
  int top=st.top();
  dist[top]=0;

  while(!st.empty()){
    int node=st.top();
    st.pop();

    for(auto it:adj[node]){
      int v=it.first;
      int w=it.second;
      if(dist[node]+w<dist[v]){
        dist[v]=dist[node]+w;
      }
    }

  }
  vector<int> ans(n);
  for(int i=0;i<n;i++){
    if(dist[i]!=1e9){
      ans[i]=dist[i];
    }
    else{
      ans[i]=-1;
    }
  }

  for(int i:ans){
    cout<<i<<" ";
  }

}