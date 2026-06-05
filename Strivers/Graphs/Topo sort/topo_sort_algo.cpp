#include<bits/stdc++.h>
using namespace std;

void dfs(int i,vector<int> &vist,vector<vector<int>> &adj,stack<int> &st){
  vist[i]=1;
  for(int it:adj[i]){
    if(!vist[it]){
      dfs(it,vist,adj,st);
    }
  }
  st.push(i);
}


int main(){
  int n=6;
  vector<int> vist(n,0);
  vector<vector<int>> adj={{},{},{3},{1},{0,1},{0,2}};
  stack<int> st;
  for(int i=0;i<n;i++){
    if(!vist[i]){
      dfs(i,vist,adj,st);
    }
  }
  while(!st.empty()){
    int x=st.top();
    st.pop();
    cout<<x<<" ";
  }
}