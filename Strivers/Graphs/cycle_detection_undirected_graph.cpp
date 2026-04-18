#include<bits/stdc++.h>
using namespace std;

//using bfs
/*

bool cycle(int src, vector<int> adj[],vector<int> &vist){
  queue<pair<int,int>> q;
  q.push({src,-1});
  vist[src]=1;
  while(!q.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();
    for(auto it:adj[node]){
      if(!vist[it]){
        q.push({it,node});
        vist[it]=1;
      }
      else if(parent!=it){
        return true;
      }
    }
    
  }
  return false;

}
  */

//dfs
bool dfs(int src,int parent,vector<int> adj[],vector<int> &vist){
  vist[src]=1;
  for(int it:adj[src]){
    if(!vist[it]){
      dfs(it,src,adj,vist);
      return true;
    }
    else if(parent!=it){
      return true;
    }
  }
  return false;

}

int main(){
  vector<int> adj[]={{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
  int n=6;
  vector<int> vist(n);
  for(int i=0;i<n;i++){
    if(!vist[i]){
      if(dfs(i,-1,adj,vist)) {
        cout<<"Cycle detected";
        return 0;
      }

    }
  }
  cout<<"cycle not detected";
  

}